//Вычислить факториал введенного числа (с помощью циклов).

#include <iostream>


int main()
{
    int n, res;
    std::cout << "\n  Please enter the number whose factorial you want to find: ";
    std::cin >> n;

    int i = 2;
    res = 1;
    while(i <= n){
        res *= i;
        i++;

    }
    std::cout << "  Factorial of " << n << " is " << res <<  std::endl;

    getchar();
    getchar();

    return 0;
}
