// coded by: Nikolai Sharp
// last edited: 04SEP15 2PM
//

#include <iostream>
#include <cmath>
#include "Point.h"

using namespace std;

double computeArea(Point[]);

int main(void)
{
    //array of 3 points to represent triangle. allows for for loop when assigning.
    Point points[3];

    //point holder
    double hold;

    //ask user for input
    cout << "Please input the coordinates for each of the three points";


    //For loop repeats three times, saves code space.
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

    //informs user the area of the triangle and using computeArea in the cout
    cout << "\n\nThe area of your triangle is: " << computeArea(points) << endl;


    return 0;
}

double computeArea(Point points[])
{
    double a, b, c, p, area;

    //Find the lengths of each side using distanceTo
    a = points[0].distanceTo(points[1]);
    b = points[1].distanceTo(points[2]);
    c = points[2].distanceTo(points[0]);

    //find 1/2 the length of the perimeter for Heron's formula
    p = (a + b + c)/2;

    //compute area using Heron's formula
    area = sqrt(p*(p-a)*(p-b)*(p-c));

    //return result
    return area;
}