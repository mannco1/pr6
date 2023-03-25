#include <iostream>
#include "YCone.h"

using namespace std;

int main() {
    
    Cone c1(2, 5);
    c1.output();
    cout << "Surface area: " << c1.surfaceArea() << endl;
    cout << "Volume: " << c1.volume() << endl;
    cout << '\n';

    
    TruncatedCone tc1(2, 5, 3, 4, 8, 1);
    tc1.output();
    cout << "Surface area: " << tc1.surfaceArea() << endl;
    cout << "Volume: " << tc1.volume() << endl;
    cout << '\n';

    
    TruncatedCone tc2(6);
    cin >> tc2;
    cout << tc2;
    cout << "Surface area: " << tc2.surfaceArea() << endl;
    cout << "Volume: " << tc2.volume() << endl;

    return 0;
}
