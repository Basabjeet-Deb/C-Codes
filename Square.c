#include <stdio.h>
int main()
{
    //We need two variables
    double Area, Side;
    //Taking side from user
    printf("Enter the Side of the Square (in Cm):");
    scanf("%lf",&Side);
    //Using the formula of area of a Square
    Area = Side*Side;
    printf("The Area of the Square is: %lf",Area);
    scanf("%lf",&Area);
    return 0; 
}