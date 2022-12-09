/*
1. Создайте структуру, которая хранит время: часы, минуты, секунды.
c. Написать функцию, которая возвращает количество секунд в заданной
переменной типа «время»
*/

#include <iostream>

struct Time
{
    long hours;
    long minutes;
    long secunds;
};

void TimeInput(Time &clock)
{
    std::cout << "Please enter hours: ";
    std::cin >> clock.hours;
    std::cout << std:: endl;

    std::cout << "Please enter minutes: ";
    std::cin >> clock.minutes;
    std::cout << std:: endl;

    std::cout << "Please enter secunds: ";
    std::cin >> clock.secunds;
    std::cout << std:: endl;
}

long TimeReturnSecund(Time &clock)
{
    return clock.hours * 3600 + clock.minutes * 60 + clock.secunds;
}
int main()
{
    Time moment;
    TimeInput(moment);

    std::cout << "Count of secunds in Time moment is ";
    std::cout << TimeReturnSecund(moment);

    return 0;
}
