
#include<cmath>
#include <iostream>


int main()
{
    float k, x, y, a;
    std::cout << "Please enter x and y: " << std::endl;
    std::cin >> x >> y;

    k = y * 0.5 + 5.5;
    a =  (exp(-tan(M_PI * k) - log(std::abs(x))))/(k*x + 100000);
    std::cout << "Result of function with this parametrs is: " << a << std::endl;

    return 0;
}
