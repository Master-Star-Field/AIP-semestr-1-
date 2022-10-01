//Вычислите  значение выражения (a+4b)(a−3b)+a*a

#include <iostream>

int main()
{
    double a,b,res;

    std::cout << "Please write a: " << std::endl;
    std::cin >> a;
    std::cout << "Please write b: " << std::endl;
    std::cin >> b;

    res = (a + 4 * b) * (a - 3 * b) + a*a;
    std::cout << "Result of math operations is " << res << std::endl;

    getchar();
    getchar();
    return 0;
}
