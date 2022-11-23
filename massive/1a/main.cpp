/*
1. Сгенерировать массив со случайными числами в диапазоне:
a. [0,10]
*/
#include <iostream>
#include<ctime>
#include<array>

int main()
{
    const int N = 10;
    std::array<int, N> numbers;
    srand(time(0));
    for(int i = 0; i < N; i++)
        numbers[i] = rand() % 11;

    for(int i = 0; i < N; i++)
        std::cout << numbers[i] << std::endl;

    return 0;
}
