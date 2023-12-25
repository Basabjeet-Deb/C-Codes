#include <stdio.h>
int main()
{
    //We need two variables
    double Area, Radius;
    //Taking Radius from user
    printf("Enter the Radious of the circle:");
    scanf("%lf",&Radius);
    //Using the formula of area of a circle
    Area = 3.14*Radius*Radius;
    printf("The Area of the circle is: %lf",Area);
    scanf("%lf",&Area);
    return 0; 
}
