//13. Увеличить все отрицательные элементы на 5, а положительные уменьшить на 1

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
    std::cout << "----mas----" << std::endl;
    for(int i = 0; i < N; i++)
        std::cout << numbers[i] << std::endl;

    for(int i = 0; i < N; i++)
        if(numbers[i] > 0)
            numbers[i] -= 1;
        else if(numbers[i] < 0)
            numbers[i] += 5;
    std::cout << "----mas----" << std::endl;
    for(int i = 0; i < N; i++)
        std::cout << numbers[i] << std::endl;
    return 0;
}
