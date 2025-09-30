/*

Name: kipsemian Newton
Reg no: pa106/g/28743/25
Description: simple c program to check if a student is eligible for final exams

*/

#include<stdio.h>

int main (){
//Declaration of variables;
float attendance;
int marks;

  printf("Enter your attendance: ");
  scanf("%f",&attendance);
  
  printf("Enter your marks :");
  scanf("%d",& marks);

//conditions ;
 if ( attendance >=0.75 && marks >=40)
     printf("you are eligible for final exams");
 else 
     printf("Not eligible");  

   
return 0;
}