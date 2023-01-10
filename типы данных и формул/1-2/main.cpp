
#include<cmath>
#include <iostream>


int main()
{
    float a, b, z, y;
    std::cout << "Please enter a and b: " << std::endl;
    std::cin >> a >> b;

    z = std::abs(b - 15.1);
    y = (exp(-a) + (z + 1000)/sin(z))/(cos(M_PI) * z + log(b));
    std::cout << "Result of function with this parametrs is: " << y << std::endl;



    return 0;
}
