// A 2-dimensional point class!
// Coordinates are double-precision floating point.
// Edited and added to by: Nikolai Sharp

#ifndef __point_h
#define __point_h

class Point {

private:
  double x;
  double y;
    //added z coordinate for 3d computing
  double z;

public:
  // Constructors
    Point();                      // default constructor
    Point(double x, double y, double z);    // three-argument constructor

  // Destructor
    ~Point();

  // Mutator methods
    void setX(double newX);
    void setY(double newY);
    void setZ(double newZ); //added

  // Accessor methods
    double getX();
    double getY();
    double getZ(); //added

    // distance function.
    double distanceTo(Point &);
};

#endif // __point_h