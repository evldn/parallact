#ifndef EXECUTOR_EXECUTOR_HPP
#define EXECUTOR_EXECUTOR_HPP
#include <functional>
#include <string>
#include <unordered_map>
#include <vector>
#include <queue>


class Executor {
public:
    using Function = std::function<void()>;

    void addFunction(const std::string& name, const Function& function);
    void addDependency(const std::string& from, const std::string& to);
    void execute();

private:
    std::unordered_map<std::string, Function> functions;
    std::unordered_map<std::string, std::vector<std::string>> dependencies;
};

#endif // EXECUTOR_EXECUTOR_HPP
