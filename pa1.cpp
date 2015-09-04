// coded by: Nikolai Sharp
// last edited: 04SEP15 2PM
//

#include <iostream>
#include <cmath>
#include <iomanip>
#include "Point.h"

using namespace std;

double computeArea(Point &, Point &, Point &);

int main(void)
{
    //point holders
    double x, y, z, area;

    //ask user for input
    cout << "\nPlease input the coordinates for each of the three points:\n";


    //ask for user input and assign to x coordinate of first point
    cout << "\npoint 1 x coordinate: ";
    cin >> x;

    //ask for user input and assign to y coordinate of first point
    cout << "\npoint 1 y coordinate: ";
    cin >> y;

    //ask for user input and assign to z coordinate of first point
    cout << "\npoint 1 z coordinate: ";
    cin >> z;

    //create first point with user input using constructor
    Point point1(x, y, z);

    //ask for user input and assign to x coordinate of second point
    cout << "\npoint 2 x coordinate: ";
    cin >> x;

    //ask for user input and assign to y coordinate of second point
    cout << "\npoint 2 y coordinate: ";
    cin >> y;

    //ask for user input and assign to z coordinate of second point
    cout << "\npoint 2 z coordinate: ";
    cin >> z;

    //create second point with user input using constructor
    Point point2(x, y, z);

    //ask for user input and assign to x coordinate of third point
    cout << "\npoint 3 x coordinate: ";
    cin >> x;

    //ask for user input and assign to y coordinate of third point
    cout << "\npoint 3 y coordinate: ";
    cin >> y;

    //ask for user input and assign to z coordinate of third point
    cout << "\npoint 3 z coordinate: ";
    cin >> z;

    //create third point with user input using constructor
    Point point3(x, y, z);

    //compute the area of the 3D triangle from these points
    area = computeArea(point1, point2, point3);

    //informs user the area of the triangle
    cout << "\n\nThe area of your triangle is: " << fixed << setprecision(2) << area << endl;


    return 0;
}

double computeArea(Point &cPoint1, Point &cPoint2, Point &cPoint3)
{
    double a, b, c, p, area;

    //Find the lengths of each side using distanceTo
    a = cPoint1.distanceTo(cPoint2);
    b = cPoint2.distanceTo(cPoint3);
    c = cPoint3.distanceTo(cPoint1);

    //find 1/2 the length of the perimeter for Heron's formula
    p = (a + b + c)/2;

    //compute area using Heron's formula
    area = sqrt(p*(p-a)*(p-b)*(p-c));

    //return result
    return area;
}