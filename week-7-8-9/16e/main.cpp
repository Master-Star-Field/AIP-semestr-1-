//Реализовать функцию. Протабулировать функцию.
//y = 2x - 15, если x > 2
//y = 5, если x = 2
//y = 3 * |x - 1| - 8, если x < 2

#include <cmath>
#include <iostream>

float function(double x){
    const float eps = 0.00001;
    float y;

    if (x > 2){
        y = 2 * x - 15;
        return y;
    }
    if (std::abs(x - 2) < eps){
        y = 5;
        return y;
    }
    if (x < 0){
        y  = 3 * std::abs(x - 1) - 8;
        return y;
    }
}

int main() {

    float dx, xf, x;
    float f;

    std::cout << "Solve function. \nEnter dx: ";
    std::cin >> dx;

    std::cout << "Enter start x: ";
    std::cin >> x;

    std::cout << "Enter end x: ";
    std::cin >> xf;

    std::cout << "----------------------------------" << std::endl;
    std::cout << "\tx\t\ty" << std::endl;

    std::cout.precision(4);
    while (x < xf){
        f = function(x);
        std::cout << "\t" << x << "\t\t" << f << std::endl;
        x += dx;
    }

    system("pause");
    return 0;
}
