/*
Korey Mena
Fall 2024
Intro to C Juan Parra
Ask for cordinate points to calculate Distance, Area, Perimeter, Width,
and Height
input : x1 x2 y1 y2
*/
#include <math.h>
#include <stdio.h>
#define PI 3.14159

//Function that can be called to scan user input
double askForUserInput(){
    double input;
    scanf("%lf", &input);
    return input;
}

// Helper function to calculate the distance between two points
double calculateDistanceHelper() {
  double x1;
  double x2;
  double y1;
  double y2;
  printf("\nPlease enter your points\n");
  printf("x1: ");
  x1 = askForUserInput();
  printf("x2: ");
  x2 = askForUserInput();
  printf("y1: ");
  y1 = askForUserInput();
  printf("y2: ");
  y2 = askForUserInput();
  printf("Point #1 entered: x1 = %.3f; y1 = %.3f\n", x1, y1);
  printf("Point #2 entered: x2 = %.3f; y2 = %.3f\n", x2, y2);
  return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

// Function that prints the distance between two points
double calculateDistance() {

  double distance = calculateDistanceHelper();
  printf("\nThe distance between the two points is %.3f\n", distance);
  return distance;
}

// Function to calculate and print the perimeter of the city (2 * PI * (distance/2))
double calculatePerimeter() {
  double distance = calculateDistanceHelper(); // Call distance function
  double perimeter = 2 * (distance/2) * PI;
  printf("\nThe perimeter of the city encompassed by your request is %.3f\n",
         perimeter);

  return 3.0; // Difficulty on a scale of 1 to 5
}

// Function to calculate and print the area of the city (PI * (distance / 2)^2)
double calculateArea() {
  double distance = calculateDistanceHelper(); // Call distance function
  double area = PI * pow((distance / 2), 2);
  printf("\nThe area of the city encompassed by your request is %.3f\n", area);

  return 3.0; // Difficulty on a scale of 1 to 5
}

// Function to call distanceHelper and print the width of the city (using distance)
double calculateWidth() {
  double distance = calculateDistanceHelper(); // Call distance function
  printf("\nThe width of the city encompassed by your request is %.3f\n",
         distance);

  return 4; // Difficulty on a scale of 1 to 5
}

// Function to call distanceHelper and print the height of the city (using distance)
double calculateHeight() {
  double distance = calculateDistanceHelper(); // Call distance function
  printf("\nThe height of the city encompassed by your request is %.3f\n",
         distance);

  return 4; // Difficulty on a scale of 1 to 5
}
// Call functions in sequence
int main(int argc, char **argv) {
  calculateDistance();
  calculatePerimeter();
  calculateArea();
  calculateWidth();
  calculateHeight();

  return 0;
}