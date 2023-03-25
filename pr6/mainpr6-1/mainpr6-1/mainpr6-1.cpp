#include <iostream>
#include <cmath>
#include "Cone.h"

using namespace std;

int main()
{
    Cone c1; 
    cout << "Введите данные конуса (x y z radius height): ";
    cin >> c1;
    cout << "Данные введены: " << c1;
    cout << "Площадь поверхности: " << c1.area() << endl;
    cout << "Объем: " << c1.volume() << endl;

    Cone c2(1, 2, 3, 5, 10); 
    cout << "Конус 2: " << c2;
    cout << "Площадь поверхности: " << c2.area() << endl;
    cout << "Объем: " << c2.volume() << endl;

    Cone c3(2, 4, 6, 8, 12); 
    cout << "Конус 3: " << c3;
    cout << "Площадь поверхности: " << c3.area() << endl;
    cout << "Объем: " << c3.volume() << endl;

    Cone cones[3] = { c1, c2, c3 }; 

    return 0;
}
