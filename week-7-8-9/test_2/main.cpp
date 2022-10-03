/*
 * Описать функцию RectPS(x1, y1, x2, y2, P, S), вычисляющую периметр P и площадь
S прямоугольника со сторонами, параллельными осям координат, по координатам
(x1, y1), (x2, y2) его противоположных вершин (x1, y1, x2, y2) — входные, P и S —
выходные параметры вещественного типа. С помощью этой функцию найти
периметры и площади трех прямоугольников с данными противоположными
вершинами.
*/

#include <iostream>
#include <cmath>
void RectPS(float x1,float y1,float x2,float y2,float &P,float &S){

    P = 2 * std::abs(x2 - x1) + 2 * std::abs(y2 - y1);
    S = std::abs(x2 - x1) * std::abs(y2 - y1);

}
int main()
{
    float x1,y1,x2,y2, P, S;

    std::cout << "Please enter cordinates of points: " << std::endl;
    std::cin >> x1 >> y1 >> x2 >> y2;

    RectPS(x1,y1,x2,y2,P, S);

    std::cout << "Perimetr is " << P << " and S is " << S << std::endl;
    return 0;
}
