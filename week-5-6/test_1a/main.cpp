//1. Дана функция y=f(x). Найти значение функции по x:
//y = 2x - 10, если x > 0
//y = 0, если x = 0
//y = 2 * |x| - 1, если x < 0

#include <iostream>
#include<cmath>

float f(float x){
    float y;

    if (x > 0){
        y = 2 * x - 10;
    }
    if ( x == 0){
        y = 0;
    }
    if (x < 0){
        y  = 2 * std::abs(x) - 1;
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
