//14. Создать новый массив из двух других массивов путём операций над элементами массивов:
//a. перемножения

#include <iostream>
#include<ctime>
#include<array>
int main()
{
    const int N = 10;
    std::array<int, N> numbers_1;
    std::array<int, N> numbers_2;
    srand(time(0));
    for(int i = 0; i < N; i++)
        numbers_1[i] = rand() % 11;
    std::cout << "----mas_1----" << std::endl;
    for(int i = 0; i < N; i++)
        std::cout << numbers_1[i] << std::endl;

    for(int i = 0; i < N; i++)
        numbers_2[i] = rand() % 11;
    std::cout << "----mas_2----" << std::endl;
    for(int i = 0; i < N; i++)
        std::cout << numbers_2[i] << std::endl;

    for(int i = 0; i < N; i++)
        numbers_1[i] *= numbers_2[i];
    std::cout << "----result_mas----" << std::endl;
    for(int i = 0; i < N; i++)
        std::cout << numbers_1[i] << std::endl;
    return 0;
}
