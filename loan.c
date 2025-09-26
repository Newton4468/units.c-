/*

Name: kipsemian Newton
Reg no: pa106/g/28743/25
Description: simple c program to display loan eligibility 

*/

#include<stdio.h>

int main (){
//Declaration of variables;
int age;
float income;

printf("Enter your age in years:");
scanf("%d",&age);
printf("Enter income:");
scanf("%f",&income);

if (age >=21 && income >=21000){
   printf("congratulations you qualify for the loan\n");}
   
 else {printf("we are unable to offer you a loan at this time");}

return 0;
}