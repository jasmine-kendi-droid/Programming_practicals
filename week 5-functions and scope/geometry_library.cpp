
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

// Global constant for Pi
const double PI = 3.14159;

// 1. Calculate Area of a Circle
double areaOfCircle(double radius) {
    if (radius < 0) {
        cout << "Error: Radius cannot be negative." << endl;
        return 0.0;
    }
    return PI * radius * radius;
}

// 2. Calculate Area of a Rectangle
double areaOfRectangle(double length, double width) {
    if (length < 0 || width < 0) {
        cout << "Error: Length and width cannot be negative." << endl;
        return 0.0;
    }
    return length * width;
}

// 3. Calculate Area of a Triangle
double areaOfTriangle(double base, double height) {
    if (base < 0 || height < 0) {
        cout << "Error: Base and height cannot be negative." << endl;
        return 0.0;
    }
    return 0.5 * base * height;
}

// CHALLENGE 1: Calculate Area of a Square
double areaOfSquare(double side) {
    if (side < 0) {
        cout << "Error: Side length cannot be negative." << endl;
        return 0.0;
    }
    return side * side;
}

// CHALLENGE 2: Calculate Perimeter of a Rectangle
double perimeterOfRectangle(double length, double width) {
    if (length < 0 || width < 0) {
        cout << "Error: Length and width cannot be negative." << endl;
        return 0.0;
    }
    return 2.0 * (length + width);
}

// CHALLENGE 4: Calculate All Shapes at Once
void calculateAll() {
    double radius, length, width, base, height, side;
    
    cout << "\n--- ENTER DIMENSIONS FOR ALL SHAPES ---" << endl;
    cout << "Enter Circle radius: ";
    cin >> radius;
    cout << "Enter Rectangle length: ";
    cin >> length;
    cout << "Enter Rectangle width: ";
    cin >> width;
    cout << "Enter Triangle base: ";
    cin >> base;
    cout << "Enter Triangle height: ";
    cin >> height;
    cout << "Enter Square side length: ";
    cin >> side;

    cout << "\n========================================" << endl;
    cout << "        SUMMARY OF CALCULATIONS         " << endl;
    cout << "========================================" << endl;
    cout << "Circle Area:           " << fixed << setprecision(2) << areaOfCircle(radius) << endl;
    cout << "Rectangle Area:        " << fixed << setprecision(2) << areaOfRectangle(length, width) << endl;
    cout << "Rectangle Perimeter:   " << fixed << setprecision(2) << perimeterOfRectangle(length, width) << endl;
    cout << "Triangle Area:         " << fixed << setprecision(2) << areaOfTriangle(base, height) << endl;
    cout << "Square Area:           " << fixed << setprecision(2) << areaOfSquare(side) << endl;
    cout << "========================================" << endl;
}

// Display Menu Options
void displayMenu() {
    cout << "\n===== GEOMETRY CALCULATOR =====" << endl;
    cout << "1. Area of Circle" << endl;
    cout << "2. Area of Rectangle" << endl;
    cout << "3. Area of Triangle" << endl;
    cout << "4. Area of Square" << endl;
    cout << "5. Perimeter of Rectangle" << endl;
    cout << "6. Calculate All Shapes" << endl;
    cout << "7. Exit" << endl;
    cout << "Enter your choice: ";
}

int main() {
    int choice;
    double radius, length, width, base, height, side, result;

    do {
        displayMenu();
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter radius: ";
                cin >> radius;
                result = areaOfCircle(radius);
                cout << "Area of circle: " << fixed << setprecision(2) << result << endl;
                break;
            case 2:
                cout << "Enter length: ";
                cin >> length;
                cout << "Enter width: ";
                cin >> width;
                result = areaOfRectangle(length, width);
                cout << "Area of rectangle: " << fixed << setprecision(2) << result << endl;
                break;
            case 3:
                cout << "Enter base: ";
                cin >> base;
                cout << "Enter height: ";
                cin >> height;
                result = areaOfTriangle(base, height);
                cout << "Area of triangle: " << fixed << setprecision(2) << result << endl;
                break;
            case 4:
                cout << "Enter side length: ";
                cin >> side;
                result = areaOfSquare(side);
                cout << "Area of square: " << fixed << setprecision(2) << result << endl;
                break;
            case 5:
                cout << "Enter length: ";
                cin >> length;
                cout << "Enter width: ";
                cin >> width;
                result = perimeterOfRectangle(length, width);
                cout << "Perimeter of rectangle: " << fixed << setprecision(2) << result << endl;
                break;
            case 6:
                calculateAll();
                break;
            case 7:
                cout << "Goodbye!" << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 7);

    return 0;
}