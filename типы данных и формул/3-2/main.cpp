#include<cmath>
#include <iostream>


int main()
{
    float k, x, m, i;
    std::cout << "Please enter x and m: " << std::endl;
    std::cin >> x >> m;

    i = (m - 1)/(m + 1);
    k =  (log(std::abs(i + 0.08)) - log(i)) / (cos(M_PI * i) + exp(i));
    std::cout << "Result of function with this parametrs is: " << k << std::endl;

    return 0;
}
