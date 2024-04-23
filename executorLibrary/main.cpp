#include "Executor.h"
#include "generateMatrix.hpp"
#include "generateVector.hpp"
#include "multiply.hpp"
#include "printVector.hpp"

int main() {
    Executor executor;

    // Создаем необходимые параметры
    const int rows = 10;
    const int cols = 5;
    std::vector<std::vector<double>> matrix;
    std::vector<double> vector;
    std::vector<double> result;

    // Добавление функций
    executor.addFunction("generateMatrix", [&](){ generateMatrix(rows, cols, matrix); });
    executor.addFunction("generateVector", [&](){ generateVector(cols, vector); });
    executor.addFunction("multiply", [&](){ multiply(matrix, vector, result); });
    executor.addFunction("printVector", [&](){ printVector(result); });

    // Добавление зависимостей
    executor.addDependency("generateMatrix", "multiply");
    executor.addDependency("generateVector", "multiply");
    executor.addDependency("multiply", "printVector");

    // Выполнение
    executor.execute();

    return 0;
}