// properties-of-a-circle.cpp : A program that provides the radius, circumference and area of a circle given the coordinates of its center point and a point on its circumference.
//

#include <iostream>
#include <cmath>
using namespace std;

double calcDistance(double x1, double x2, double y1, double y2);
double calcRadius(double x1, double x2, double y1, double y2);
double calcCircumference(double radius);
double calcArea(double radius);

int main()
{
	// set variables
    double xCenter, yCenter, xPoint, yPoint, radius, circumference, area;

    // get coordinates from use
    cout << "Enter the x-coordinate of the center: ";
    cin >> xCenter;
    cout << "Enter the y-coordinate of the center: ";
    cin >> yCenter;
    cout << "Enter the x-coordinate of a point on the circle: ";
    cin >> xPoint;
    cout << "Enter the y-coordinate of a point on the circle: ";
    cin >> yPoint;

    // get the radius, circumference, and area
    radius = calcRadius(xCenter, yCenter, xPoint, yPoint);
    circumference = calcCircumference(radius);
    area = calcArea(radius);

    // Display the results
    cout << "The radius of the circle is " << radius << endl;
    cout << "The circumference of the circle is " << circumference << endl;
    cout << "The area of the circle is " << area << endl;
    return 0;
}

double calcDistance(double x1, double y1, double x2,double y2)
{
    // input coordinates of two points on Cartesian plane

    // calculate the distance between the two points
    return sqrt(pow((x2 - x1),2) + pow((y2 - y1),2));
}

double calcRadius(double x1, double y1, double x2, double y2)
{
    // input coordinates for the center and a point on the circle

    // calculate the radius
    return calcDistance(x1, y1, x2, y2);
}

double calcCircumference(double radius)
{
    // input the radius of the circle

    // variables
    double pi = 3.1416;

    // calculate the circumference
    return 2 * pi * radius;
}

double calcArea(double radius)
{
    // input the radius of the circle

    // variables
    double pi = 3.1416;

    // calculate the circumference
    return pi * radius * radius;
}