#include "executor.hpp"

void Executor::addFunction(const std::string& name, const Function& function) {
        functions[name] = function;
}

void Executor::addDependency(const std::string& from, const std::string& to) {
        dependencies[to].push_back(from);
}

void Executor::execute() {
    std::unordered_map<std::string, bool> executed;

    auto allDependenciesExecuted = [&](const std::vector<std::string>& deps) {
        for (const auto& dep : deps) {
            if (!executed[dep]) return false;
        }
        return true;
    };

    std::queue<std::string> executionQueue;

    for (const auto& [name, func] : functions) {
        if (dependencies.find(name) == dependencies.end()) {
            executionQueue.push(name);
        }
    }

    while (!executionQueue.empty()) {
        std::string current = executionQueue.front();
        executionQueue.pop();

        // Проверяем, выполнены ли все зависимости
        if (!allDependenciesExecuted(dependencies[current])) {
            executionQueue.push(current);
            continue;
        }

        // Выполняем функцию
        functions[current]();

        // Отмечаем функцию как выполненную
        executed[current] = true;

        /*for (const auto& func : dependencies[current]) {
            if (!executed[func] && allDependenciesExecuted(dependencies[func])) {
                executionQueue.push(func);
            }
        }*/

        for (const auto& [name, deps] : dependencies) {
            if (!executed[name] && allDependenciesExecuted(deps)) {
                executionQueue.push(name);
            }
        }
    }
}