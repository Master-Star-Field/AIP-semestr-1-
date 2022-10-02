//Пользователь задаёт число Ч и Х. Посчитать y:
//a.y =  x + 2x + 3x + ... + Чx

#include <iostream>

int main()
{
    double x, y;
    int ch;

    std::cout << "Please enter x: " << std::endl;
    std::cin >> x;

    std::cout << "Please enter ch: " << std::endl;
    std::cin >> ch;

    y = (1 + ch) * ch / 2 * x;

    std::cout << "Sum is " << y << std::endl;

    getchar();
    getchar();
    return 0;
}
