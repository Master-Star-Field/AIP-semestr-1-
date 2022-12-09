/*
2. Создайте структуру для хранения комплексных чисел. Атрибуты: вещественная и
мнимая части. Объявите два числа и получите их значения от пользователя.
a. Напишите функцию, которая будет считать модуль комплексного числа.
*/

#include <iostream>
#include<cmath>
struct Number
{
    float reality;
    float imaginary;
};

void NumberInput(Number &num)
{
    std::cout << "Please enter reality path of complex number: ";
    std::cin >> num.reality;
    std::cout << std::endl;

    std::cout << "Please enter imaginary path of complex number: ";
    std::cin >> num.imaginary;
    std::cout << std::endl;

}
float module(Number &num)
{
    return std::sqrt(num.reality * num.reality + num.imaginary * num.imaginary);
}
int main()
{
    Number num_1, num_2;
    NumberInput(num_1);
    NumberInput(num_2);

    std::cout << "module of first number is " << module(num_1) << std::endl;
    std::cout << "module of first number is " << module(num_2) << std::endl;
    return 0;
}
