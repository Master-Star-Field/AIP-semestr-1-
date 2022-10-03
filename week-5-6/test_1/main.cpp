//пример 1

#include <iostream>


int main()
{
    int a, b; //Два целых числа

    std::cout << "enter a and  b" << std::endl;
    std::cin >> a >> b;

    if (a > b == true) {
        std::cout << "a > b" << std::endl;
    }
    if (a > b) {
        std::cout << "a > b" << std::endl;
    }

    // Если необходимо выполнить действия при обратном условии, то
    //используют оператор отрицания:

    if (!(a > b)){
        std::cout << "a not equal b" << std::endl;
    }

    //На самом деле это в полной версии выглядит так:
    if ((a > b) == false) {
        std::cout << "a not equal b" << std::endl;
    }


    return 0;
}
