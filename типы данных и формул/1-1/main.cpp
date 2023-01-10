/*
Данные жильца гостиницы
Фамилия жильца
Занимаемый номер
Дата поселения(ден, месяц, год)
Стоимость проживания
*/

#include <iostream>
#include<string>

int main()
{
    int number, d, m, y;
    std::string surname;
    float cost;
    std::cout << "Please enter surname: " << std::endl;
    std::cin >> surname;

    std::cout << "Please enter your number: "  << std::endl;
    std::cin >> number;

    std::cout << "Please enter day mounth and years in format d m y" << std::endl;
    std::cin >> d >> m >> y;

    std::cout << "please enter cost of living:" << std::endl;
    std::cin >> cost;

    return 0;
}
