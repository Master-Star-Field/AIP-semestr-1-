/*
 * Описать процедуру ShiftLeft3(A, B, C), выполняющую левый циклический сдвиг:
значение A переходит в C, значение C — в B, значение B — в A (A, B, C —
вещественные параметры, являющиеся одновременно входными и выходными). С
помощью этой процедуры выполнить левый циклический сдвиг для двух данных
наборов из трех чисел: (A1, B1, C1) и (A2, B2, C2).
*/

#include <iostream>

void ShiftLeft3(float &A, float &B, float &C){
    float temp = C;

    C = A;
    A = B;
    B = temp;

}

int main()
{
    float A, B, C;

    std::cout << "Please enter A, B, C: " << std::endl;
    std::cin >> A >> B >> C;

    std::cout << "Values of A, B, C: " << std::endl << A << " " << B << " " << C << std::endl;
    ShiftLeft3(A, B, C);
    std::cout << "Values of A, B, C: after function: " << std::endl << A << " " << B << " " << C << std::endl;

    system("pause");
    return 0;
}
