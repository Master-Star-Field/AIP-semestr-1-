//рисунок 3a

#include <iostream>
#include<cmath>

int main()
{
    float r_in = 1; // радиус окружности
    float r_out = 2;
    float x, y;
    std::cout << "Please enter x: " << std::endl;
    std::cin >> x;

    std::cout << "Please enter y: " << std::endl;
    std::cin >> y;

    float rc = sqrt(x*x+y*y);

    if ((rc > r_in) and (rc < r_out) and  (y > 0)){

        std::cout << "yes" << std::endl;
    }
    else{

    std::cout << "no" << std::endl;;
   }

    system("pause");
    return 0;
}
