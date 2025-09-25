//2D Shape Area Calculator
//By: Caitlin Ochuwa
//Completed: 09/23/25
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std; 

void areaOfTraingle() //Function to calculate area of a triangle
{
    //User enters length and height to be calculated 
    double length, height, area;
    cout << "Enter the length: ";
    cin >> length;
    cout << "Enter the height: ";
    cin >> height;
    area = (length*height)/2; //Area of a triangle is length multiplied by the height divided by 2
    cout << "The area of the triangle is " << area << endl; //Prints area after using formula 
}

void areaOfSquare() //Function to calculate area of a square
{
    //User enters length to be calculated 
    double length, area;
    cout << "Enter the length: ";
    cin >> length;
    area = pow(length, 2); //Area of a square is the length squared 
    cout << "The area of the square is " << area << endl; //Prints area after using formula 
}

void areaOfCircle() //Function to calculate area of a circle
{
    //User enters radius to be calculated 
    const double PI = 3.14;  
    double radius, area;
    cout << "Enter the radius: ";
    cin >> radius;
    area = PI*(pow(radius, 2.0)); //Area of a circle is pi multiplied by the radius squared 
    cout << "The area of the circle is " << area << endl; //Prints area after using formula 
}

void areaOfRectangle() //Function to calculate area of a rectangle 
{
    //User enters length and width to be calculated 
    double length, width, area;
    cout << "Enter the length: ";
    cin >> length;
    cout << "Enter the width: ";
    cin >> width;
    area = length*width; //Area of a rectangle is the length multiplied by the width
    cout << "The area of the rectangle is " << area << endl; //Prints area after using formula 
}

void areaOfTrapezoid() //Function to calculate area of a trapezoid 
{
    //User enters top and bottom lengths and height to be calculated 
    double length1, length2, height, area;
    cout << "Enter the length of the top: ";
    cin >> length1;
    cout << "Enter the length of the bottom: ";
    cin >> length2;
    cout << "Enter the height: ";
    cin >> height;
    area = ((length1 + length2)/2)*height; //Area of a trapezoid is the average of the top and bottom lengths multiplied by the height
    cout << "The area of the trapezoid is " << area << endl; //Prints area after using formula 
}

int main() 
{
    string shape; //Stores the shape the user enters
    int decimalPlaces; //Stores the number of decimal places the user enters
    
    cout << "What area would you like to calculate?(Triangle, Square, Circle, Rectangle, Trapezoid): ";
    getline(cin, shape);
    cout << "How many decimal places should the area be? ";
    cin >> decimalPlaces;
    cout << setprecision(decimalPlaces) << fixed; //Sets the number of decimal values based on the user's entry 
    
    //User's shape entry will determine which area function is called to calculate the area
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
        cout << "Can't compute that area." << endl; //If the user enters an invalid shape or string
    }

    return 0;

}
