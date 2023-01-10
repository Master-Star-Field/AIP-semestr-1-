/*
Данные сотрудника предприятия:
Фамилия
Инициалы
Должность
Год приема на работу
Оклад
*/

#include <iostream>
#include<string>

int main()
{
    int year_start_work, oklad;
    std::string surname, inicials, dolgnost;

    std::cout << "Please enter surname: " << std::endl;
    std::cin >> surname;

    std::cout << "Please enter your inicials: "  << std::endl;
    std::cin >> inicials;

    std::cout << "Please enter your dolgnost on work: "  << std::endl;
    std::cin >> dolgnost;

    std::cout << "Please enter your oklad: " << std::endl;
    std::cin >> oklad;

    std::cout << "Please enter years of start your work:" << std::endl;
    std::cin >> year_start_work;

    return 0;
}
