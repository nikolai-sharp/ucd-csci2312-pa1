// Edited and added to by: Nikolai Sharp

#include "Point.h"
#include <cmath>

// Default constructor
// Initializes the point to (0.0, 0.0)
Point::Point() {
  x = 0.0;
  y = 0.0;
  z = 0.0;
}

// Constructor
// Initializes the point to (initX, initY)
Point::Point(double initX, double initY, double initZ) {
  x = initX;
  y = initY;
  z = initZ;
}

// Destructor
// No dynamic allocation, so nothing to do; if omitted, generated automatically
Point::~Point() {
  // no-op
}

// Mutator methods
// Change the values of private member variables

void Point::setX(double newX) {
  x = newX;
}

void Point::setY(double newY) {
  y = newY;
}

void Point::setZ(double newZ) {
  z = newZ;
}

// Accessors
// Return the current values of private member variables

double Point::getX() {
  return x;
}

double Point::getY() {
  return y;
}

double Point::getZ(){
  return z;
}

  //definition of distanceTo calculates distance between original point and supplied point.
double Point::distanceTo(Point & point1)
{

  double xDist, yDist, zDist, dist;

  //distance between each coordinate found.
  xDist = point1.getX() - x;
  yDist = point1.getY() - y;
  zDist = point1.getZ() - z;

  //finds the square root of the sums of the three squared values for distance between two points.
  dist = sqrt(pow(xDist,2) + pow(yDist,2) + pow(zDist,2));

  //return result
  return dist;

}