//3. Вычислить сумму нечётных/чётных элементов массива

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

    int sums_ch = 0;
    int sums_nech = 0;
    for(int i = 0; i < N; i++)
        if(numbers[i] % 2 == 0)
            sums_ch += numbers[i];
        else
            sums_nech += numbers[i];
    std::cout << "Sum of chetniys is " << sums_ch << std::endl;
    std::cout << "Sum of nechetniys is " << sums_nech << std::endl;
    return 0;
}
