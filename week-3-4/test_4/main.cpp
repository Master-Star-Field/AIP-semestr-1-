//Вывести на экран ряд натуральных чисел от Н до М с шагом Ш. Например, если
//Н=10, М=35, Ш=5, то вывод должен быть таким: 10 15 20 25 30 35. Значения Н, М,
//Ш указываются пользователем

#include <iostream>

int main() {

    int i;
    std::cout << "Enter start number: ";
    std::cin >> i;

    int end;
    std::cout << "Enter end number: ";
    std::cin >> end;

    int d;
    std::cout << "Enter step number: ";
    std::cin >> d;

    for(; i <= end; i+= d){
        std::cout << " " << i << " ";
        std::cout << std::endl;
    }
    std::getchar();
    std::getchar();
    return 0;
}
