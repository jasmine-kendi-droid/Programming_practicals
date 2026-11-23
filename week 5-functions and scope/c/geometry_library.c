
#include <stdio.h>

#define PI 3.14159

// 1. Calculate Area of a Circle
double areaOfCircle(double radius) {
    if (radius < 0) {
        printf("Error: Radius cannot be negative.\n");
        return 0.0;
    }
    return PI * radius * radius;
}

// 2. Calculate Area of a Rectangle
double areaOfRectangle(double length, double width) {
    if (length < 0 || width < 0) {
        printf("Error: Length and width cannot be negative.\n");
        return 0.0;
    }
    return length * width;
}

// 3. Calculate Area of a Triangle
double areaOfTriangle(double base, double height) {
    if (base < 0 || height < 0) {
        printf("Error: Base and height cannot be negative.\n");
        return 0.0;
    }
    return 0.5 * base * height;
}

// CHALLENGE 1: Calculate Area of a Square
double areaOfSquare(double side) {
    if (side < 0) {
        printf("Error: Side length cannot be negative.\n");
        return 0.0;
    }
    return side * side;
}

// CHALLENGE 2: Calculate Perimeter of a Rectangle
double perimeterOfRectangle(double length, double width) {
    if (length < 0 || width < 0) {
        printf("Error: Length and width cannot be negative.\n");
        return 0.0;
    }
    return 2.0 * (length + width);
}

// CHALLENGE 4: Calculate All Shapes at Once
void calculateAll() {
    double radius, length, width, base, height, side;

    printf("\n--- ENTER DIMENSIONS FOR ALL SHAPES ---\n");
    printf("Enter Circle radius: ");
    scanf("%lf", &radius);
    printf("Enter Rectangle length: ");
    scanf("%lf", &length);
    printf("Enter Rectangle width: ");
    scanf("%lf", &width);
    printf("Enter Triangle base: ");
    scanf("%lf", &base);
    printf("Enter Triangle height: ");
    scanf("%lf", &height);
    printf("Enter Square side length: ");
    scanf("%lf", &side);

    printf("\n========================================\n");
    printf("        SUMMARY OF CALCULATIONS         \n");
    printf("========================================\n");
    printf("Circle Area:           %.2f\n", areaOfCircle(radius));
    printf("Rectangle Area:        %.2f\n", areaOfRectangle(length, width));
    printf("Rectangle Perimeter:   %.2f\n", perimeterOfRectangle(length, width));
    printf("Triangle Area:         %.2f\n", areaOfTriangle(base, height));
    printf("Square Area:           %.2f\n", areaOfSquare(side));
    printf("========================================\n");
}

// Display Menu Options
void displayMenu() {
    printf("\n===== GEOMETRY CALCULATOR =====\n");
    printf("1. Area of Circle\n");
    printf("2. Area of Rectangle\n");
    printf("3. Area of Triangle\n");
    printf("4. Area of Square\n");
    printf("5. Perimeter of Rectangle\n");
    printf("6. Calculate All Shapes\n");
    printf("7. Exit\n");
    printf("Enter your choice: ");
}

int main() {
    int choice;
    double radius, length, width, base, height, side, result;

    do {
        displayMenu();
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter radius: ");
                scanf("%lf", &radius);
                result = areaOfCircle(radius);
                printf("Area of circle: %.2f\n", result);
                break;
            case 2:
                printf("Enter length: ");
                scanf("%lf", &length);
                printf("Enter width: ");
                scanf("%lf", &width);
                result = areaOfRectangle(length, width);
                printf("Area of rectangle: %.2f\n", result);
                break;
            case 3:
                printf("Enter base: ");
                scanf("%lf", &base);
                printf("Enter height: ");
                scanf("%lf", &height);
                result = areaOfTriangle(base, height);
                printf("Area of triangle: %.2f\n", result);
                break;
            case 4:
                printf("Enter side length: ");
                scanf("%lf", &side);
                result = areaOfSquare(side);
                printf("Area of square: %.2f\n", result);
                break;
            case 5:
                printf("Enter length: ");
                scanf("%lf", &length);
                printf("Enter width: ");
                scanf("%lf", &width);
                result = perimeterOfRectangle(length, width);
                printf("Perimeter of rectangle: %.2f\n", result);
                break;
            case 6:
                calculateAll();
                break;
            case 7:
                printf("Goodbye!\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 7);

    return 0;
}