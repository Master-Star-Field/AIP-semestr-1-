#include <iostream>

//Пользователь вводит два числа. Необходимо поменять значения переменных так,
//чтобы значение первой оказалось во второй, а второй - в первой

int main()
{
    int num_1, num_2, temp_num;

    std::cout << "please enter first integers:" << std::endl;
    std::cin >> num_1;
    std::cout << "please enter second integers:" << std::endl;
    std::cin >> num_2;

    temp_num = num_1;
    num_1 = num_2;
    num_2 = temp_num;

    std::cout << "new value of first integer: " << num_1 << std::endl;
    std::cout << "new value of second integer: " << num_2 << std::endl;

    getchar();
    getchar();
    return 0;
}
