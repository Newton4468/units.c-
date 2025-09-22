/*
Name: kipsemian Newton
Reg no: pa106/g/28743/25
Description: Prompting the user to enter details to find volume of a cylinder
*/

#include <stdio.h>

int main() {
    // Declaration of variables
    float height;
    float radius;
    float pi;
    float diameter; 
    float surface_area;

    // Prompting the user to enter variables
    printf("Enter pi: ");
    scanf("%f", &pi);

    printf("Enter radius: ");
    scanf("%f", &radius);
    
    printf("Enter diameter:");
    scanf("%f", &diameter);

    printf("Enter height: ");
    scanf("%f", &height);

    // Formula for cylinder volume
    surface_area = pi * radius * radius + pi * diameter * height;

    printf("surface area of the cylinder = %.2lf",&surface_area);

    return 0;
}