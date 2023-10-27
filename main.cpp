#include "calculator.h"
#include <iostream>

int main() {
    Calculator calc;

    // Використовуємо сталі значення для тестування
    double num1 = 10.5;
    double num2 = 5.2;

    double result_add = calc.Add(num1, num2);
    double result_sub = calc.Sub(num1, num2);
    double result_mul = calc.Mul(num1, num2);
    double result_div = calc.Div(num1, num2);

    std::cout << "Addition result: " << result_add << std::endl;
    std::cout << "Subtraction result: " << result_sub << std::endl;
    std::cout << "Multiplication result: " << result_mul << std::endl;
    std::cout << "Division result: " << result_div << std::endl;

    return 0;
}
