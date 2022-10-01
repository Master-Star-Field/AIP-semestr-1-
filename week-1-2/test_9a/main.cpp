//Сделать конвертер величин. Формат ввода: Направление_Перевода Величина.
//a. Длина (метры, версты, километры)

#include <iostream>
#include <iomanip>
int main()
{
    float meters;
    int control;

    std::cout << "If you want to convert from meters to kilometers, enter 1" << std::endl;
    std::cout << "If you want to convert from meters to miles, enter 2" << std::endl;

    std::cin >> control;

    std::cout << "Please write meters to convert: ";
    std::cin >> meters;

    std::setprecision(7);
    if (control == 1){
        std::cout << "Result is "  << meters / 1000 << " kilometers" << std::endl;
    }
    if (control == 2){
        std::cout << "Result is "  << meters / 1066.8  << " miles" << std::endl;
    }


    getchar();
    getchar();
    return 0;
}
