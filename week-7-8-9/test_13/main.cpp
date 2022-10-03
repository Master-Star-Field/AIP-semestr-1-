/*
 * Описать процедуру TimeToHMS(T, H, M, S), определяющую по времени T (в
секундах) содержащееся в нем количество часов H, минут M и секунд S (T —
входной, H, M и S — выходные параметры целого типа). Используя эту процедуру,
найти количество часов, минут и секунд для пяти данных отрезков времени T1, T2,
. . ., T5.
*/

#include <iostream>

void TimeToHMS (long T, int &H, short &M, short &S){
    H = T / 3600;
    M = (T - H * 3600) / 60;
    S = (T - H * 3600 - M * 60);
}
int main()
{
    long T;
    int H;
    short M, S;

    std::cout  << "Please enter how many secunds in time T: " << std::endl;
    std::cin >> T;

    TimeToHMS(T, H, M, S);

    std::cout << "Hours:  \t" << H << std::endl;
    std::cout << "Minutes:\t" << M << std::endl;
    std::cout << "Secunds:\t" << S << std::endl;

    system("pause");
    return 0;
}
