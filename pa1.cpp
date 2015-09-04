//
//
//

#include <iostream>
#include <cmath>
#include "Point.h"

using namespace std;

double computeArea(Point[]);

int main(void)
{
    Point points[3];

    //point holder
    double hold;

    //ask user for input
    cout << "Please input the coordinates for each of the three points";

    for (int i = 0; i < 3; i++)
    {
        cout << "\npoint " << i+1 << " x: ";
        cin >> hold;
        points[i].setX(hold);

        cout << "\npoint " << i+1 << " y: ";
        cin >> hold;
        points[i].setY(hold);

        cout << "\npoint " << i+1 << " z: ";
        cin >> hold;
        points[i].setZ(hold);
    }

    cout << "the area of the triangle created by your three points is: " << computeArea(points);


    return 0;
}

double computeArea(Point points[])
{
    double a, b, c, p, area;

    a = points[0].distanceTo(points[1]);
    b = points[1].distanceTo(points[2]);
    c = points[2].distanceTo(points[0]);

    p = (a + b + c)/2;
//compute area using Heron's formula
    area = sqrt(p*(p-a)*(p-b)*(p-c));

    return area;
}