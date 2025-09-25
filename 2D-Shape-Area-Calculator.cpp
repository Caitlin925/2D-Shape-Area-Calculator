//2D Shape Area Calculator
//By: Caitlin Ochuwa
//Completed: 09/23/25
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std; 

void areaOfTraingle()
{
    double length, height, area;
    cout << "Enter the length: ";
    cin >> length;
    cout << "Enter the height: ";
    cin >> height;
    area = (length*height)/2;
    cout << "The area of the triangle is " << area << endl;
}

void areaOfSquare()
{
    double length, area;
    cout << "Enter the length: ";
    cin >> length;
    area = pow(length, 2);
    cout << "The area of the square is " << area << endl;
}

void areaOfCircle()
{
    const double PI = 3.14;
    double radius, area;
    cout << "Enter the radius: ";
    cin >> radius;
    area = PI*(pow(radius, 2.0));
    cout << "The area of the circle is " << area << endl;
}

void areaOfRectangle()
{
    double length, width, area;
    cout << "Enter the length: ";
    cin >> length;
    cout << "Enter the width: ";
    cin >> width;
    area = length*width;
    cout << "The area of the rectangle is " << area << endl;
}

void areaOfTrapezoid(){
    double length1, length2, height, area;
    cout << "Enter the length of the top: ";
    cin >> length1;
    cout << "Enter the length of the bottom: ";
    cin >> length2;
    cout << "Enter the height: ";
    cin >> height;
    area = ((length1 + length2)/2)*height;
    cout << "The area of the trapezoid is " << area << endl;
}

int main() 
{
    string shape;
    int decimalPlaces;
    cout << "What area would you like to calculate?(Triangle, Square, Circle, Rectangle, Trapezoid): ";
    getline(cin, shape);
    cout << "How many decimal places should the area be? ";
    cin >> decimalPlaces;
    cout << setprecision(decimalPlaces) << fixed;
    if(shape == "Triangle" || shape == "triangle") 
    {
        areaOfTraingle();
    }
    else if (shape == "Square" || shape == "square"){
        areaOfSquare();
    }
    else if (shape == "Circle" || shape == "circle"){
        areaOfCircle();
    }
    else if (shape == "Rectangle" || shape == "rectangle"){
        areaOfRectangle();
    }
    else if (shape == "Trapezoid" || shape == "trapezoid"){
        areaOfTrapezoid();
    }
    else{
        cout << "Can't compute that area." << endl;
    }

    return 0;

}
