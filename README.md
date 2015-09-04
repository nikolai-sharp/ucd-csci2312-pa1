Description of 3D Point class:

To make the point class allow for 3D points rather than just 2D, I simply added a Z coordinate point, getZ and setZ functions, and updated other functions to include a z coordinate.

Main: 
This function asks for user input to create the three points, and implements the computeArea function.

Line length: distanceTo()
My distanceTo function accepts a reference to another point, then sunbracts the values x, y, and z of the initial point from the values given by getX, getY, and getZ of the new point. 
This gives the distance between each individual coordinate on the 3d coordinate space. You then square these values, add them together, and take the square root of the sum to get the distance between the two points. This will always return a positive value (no negative side lengths to worry about)

Area: computeArea()
This is useful in finding the area of a triangle made by 3 points in 3D space. Using the distanceTo function three times(once between each two point). 
The function then finds 1/2 the perimeter of the triangle by adding the three distances ('a', 'b', and 'c' in the code) and dividing that by two and assigning this value to 'p'. 
The function then uses Heron's formula to compute the area (in this case sqrt(p(p-a)(p-b)(p-c)), and assigns the value to the variable 'area', and returns this value.
The main function utilizes this function in a cout statement at the end.
