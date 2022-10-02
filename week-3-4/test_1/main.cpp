//Вывести на экран Н строк из нулей, причем количество нулей в каждой строке
//равно номеру строки. Количество строк Н вводит пользователь

#include <iostream>
#include <string>

std::string operator*(std::string s, int count)
{
    std::string res;
    for(int i = 0; i < count; ++i)
    {
        res += s;
    }
    return res;
}

int main()
{
    int H;

    std::cout << "please enter the number of lines" << std::endl;
    std::cin >> H;

    std::cout << "Our half of the pyramid has the form: " << std::endl;
    int i{0};
    while (i < H){
        std::cout << "\t" << (std::string)"0" * (i + 1) << std::endl;
        i++;

    }

    getchar();
    getchar();

    return 0;
}
