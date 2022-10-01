//10. Вводятся три целых числа. Определить какое из них наибольшее

#include <iostream>


int main()
{
    int a, b, c, res;

    std::cout << "Please write a value: " << std::endl;
    std::cin >> a;
    std::cout << "Please write b value: " << std::endl;
    std::cin >> b;
    std::cout << "Please write c value: " << std::endl;
    std::cin >> c;

    res = a * (a > b & a > c) +
          b * (b > a & b > c) +
          c * (c > a & c > b);

    std::cout << "Max number is " << res <<std::endl;

    getchar();
    getchar();
    return 0;
}
