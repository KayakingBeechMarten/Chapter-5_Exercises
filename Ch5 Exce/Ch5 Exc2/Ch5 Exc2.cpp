#include <iostream>

#include <cmath>

using std::cout;

using std::cin;

const float Pi = 3.14;


int main() {

    double CylinderHeight,

        CylinderRadius,

        CylinderVolume;



    cout << "\n\nPlease enter the cylinder's height: ";

    cin >> CylinderHeight;

    cout << "\n\nPlease enter the cylinder's radius: ";

    cin >> CylinderRadius;



    CylinderVolume = Pi * CylinderRadius * CylinderRadius * CylinderHeight;



    cout << "\n\nCylinder Volume: ";

    cout << CylinderVolume;



    return 0;
}