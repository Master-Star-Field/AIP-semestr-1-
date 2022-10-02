//Пользователь задаёт число Ч и Х. Посчитать y:
// y = -1/7x + 2 /8x - 3/9x

#include <iostream>
#include <iomanip>

int main()
{
    double x, y{0};
    std::cout << "Please enter x: ";
    std::cin >> x;

    std::cout << std::endl;

    int ch;
    std::cout << "Please enter ch( ch mast be >= 7): ";
    std::cin >> ch;

    int numerator{1}, denominator{7};
    while(denominator <= ch){
        if (denominator % 2 == 1){
            y -= (double)numerator/denominator;
        }else{
            y += (double)numerator/denominator;
        }
        numerator ++;
        denominator ++;
    }
    std::cout.precision(6);
    std::cout << "Y is " << y/x << std::endl;

    return 0;
}
