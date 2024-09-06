/* Meagan Hendrickson
COP 3223C
Professor Parra
8/29/2024
Create functions that calculate the width, 
height, distance, area, and perimeter
*/
#include <stdio.h>
#include <math.h>
#define PI 3.14 

//Objective: Calculate the distance 
double calculateDistance(){
  //define variables
  double x1, x2, y1, y2, distance;
  //user input for points
  printf("Enter the first point:");
  scanf("%lf %lf", &x1, &y1);
  printf("\nEnter the second point:");
  scanf("%lf %lf", &x2, &y2);
  //calculate distance
  distance = sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
  printf("\nThe distance between the two points is: %lf\n", distance);
  return distance;
}

//Objective: Calculate the width 
double calculateWidth(){
  //define variables 
  double width;
  //calculate width 
  width = calculateDistance();
  printf("The width of the city encompassed by your request is %lf\n", width);
  //return how difficult this was to calculate
  return 2.0;
}

//Objective: Calculate the height 
double calculateHeight(){
  //define variables 
  double height;
  //calculate height
  height = calculateDistance();
  printf("The height of the city encompassed by your request is %lf\n", height);
  //return how difficult function was 
  return 2.0;
}

//Objective: Calculate the area (length * width)
double calculateArea(){
  //define variables 
  double area, dist;
  //calculate area 
  dist = calculateDistance() * calculateDistance();
  area = (dist * PI) / 4;
  printf("The area of the city encompassed by your request is %lf\n", area);
  //return how difficult i found this function
  return 3.0;
}

//Objective: Calculate the perimeter (all sides)
double calculatePerimeter(){
  //define variables
  double perimeter;
  //calculate perimeter 
  perimeter = calculateDistance() * PI;
  printf("The perimeter of the city encompassed by your request is %lf\n", perimeter);
  //return how difficulat i found this function
  return 3.0;
}

int main(void) {
  //Call functions 
  calculateDistance();
  calculatePerimeter();
  calculateArea();
  calculateWidth();
  calculateHeight();
  
  return 0;
}