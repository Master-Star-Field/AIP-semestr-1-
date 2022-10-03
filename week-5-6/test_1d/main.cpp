//1. Дана функция y=f(x). Найти значение функции по x:
//y = 3x - 7, если x > 1
//y = 3, если x = 1
//y = 3 * |x+2| - 7, если x < 1

#include <iostream>
#include<cmath>

float f(float x){
    float y;
    const float eps = 0.00001;

    if (x > 1){
        y = 3 * x - 7;
    }
    if (std::abs(x - 1) < eps){
        y = 3;
    }
    if (x < 1){
        y  = 3 * std::abs(x + 2) - 7;
    }

    return y;
}
int main()
{
    float x;
    std::cout << "Enter x: ";
    std::cin >> x;

     std::cout << "Result of function when x = " << x << " is " << f(x) << std::endl;

     system("pause");
    return 0;
}
