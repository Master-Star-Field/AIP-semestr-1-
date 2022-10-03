
//2a Напишите программу, которая принимает от пользователя координаты точки и
//определяет, попала ли точка в заштрихованную область.
//x^2 + y^2 = 4
//y = x
//x = 2
#include <iostream>
#include<cmath>

int main()
{
    float r = 2; // радиус окружности
    float x, y;
    std::cout << "Please enter x: " << std::endl;
    std::cin >> x;

    std::cout << "Please enter y: " << std::endl;
    std::cin >> y;

    float rc = sqrt(x*x+y*y);

    if ((rc > r) and (y < x) and  (x < 2)){

        std::cout << "yes" << std::endl;
    }
    else{

    std::cout << "no" << std::endl;;
   }

    system("pause");
    return 0;
}

