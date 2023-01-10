/*
Расписание электрички:
Номер электрички
Пункт назначения
Стоимость билета
Время прибытия(часы, минуты)
*/
#include <iostream>
#include<string>

int main()
{
    int number, cost, hours, minutes;
    std::string end_punct;

    std::cout << "Please enter number of your electric train: " << std::endl;
    std::cin >> number;

    std::cout << "Please enter cost of bilet: "  << std::endl;
    std::cin >> cost;

    std::cout << "Please enter times of end your travel(format: h m): "  << std::endl;
    std::cin >> hours >> minutes;


    std::cout << "Please enter end punct of your travel:" << std::endl;
    std::cin >> end_punct;


    return 0;
}
