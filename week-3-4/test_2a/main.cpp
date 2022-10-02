//Протабулировать функцию (шаг и диапазон задаёт пользователь):
//a. y = -0.23*x*x + x

#include <iostream>
#include <iomanip>

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

    std::cout.precision(6);
    while (x < xf){
        f = -0.23 * x * x + x;
        std::cout << "\t" << x << "\t\t" << f << std::endl;
        x += dx;
    }

    getchar();
    getchar();
    return 0;
}
