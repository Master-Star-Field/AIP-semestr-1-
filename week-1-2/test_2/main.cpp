//Пользователь вводит параметры фигуры.
//Найти периметр и площадь фигур:
//a. Круг

#include <iostream>
#include <iomanip>

const double PI =  3.1415926535;
int main()
{
    double r;

    std::cout << "Please, write radius: " << std::endl;
    std::cin >> r;
    std::setprecision(7);
    std::cout << "The area of the circle is equal to: " << PI * (r*r) << std::endl;

    std::getchar();
    std::getchar();

    return 0;
}
