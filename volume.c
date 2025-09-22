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
    float volume;

// Prompting the user to enter variables
    printf("Enter pi: ");
    scanf("%f", &pi);

    printf("Enter radius: ");
    scanf("%f", &radius);

    printf("Enter height: ");
    scanf("%f", &height);

// Formula for cylinder volume;
    volume = pi * radius * radius * height;

    printf("Volume of the cylinder = %.2f", volume);

    return 0;
}