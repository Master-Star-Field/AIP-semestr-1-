/*
2. Вычислить сумму элементов массива:
a. больших 5, меньших 7, больших 3,
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
    int sums = 0;
    for(int i = 0; i < N; i++)
        if(numbers[i] > 5 && numbers[i] < 7)
            sums += numbers[i];
    std::cout << "Sum is " << sums;
    return 0;
}
