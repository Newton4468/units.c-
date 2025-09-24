/*
Name: kipsemian Newton
Reg no: pa106/g/28743/25
Description; c program to calculate compound interest 
*/

#include<stdio.h>
#include<math.h>
int main(){
  // Declaration of variables;
  float amount ;
  float principal;
  int time ;
  float rate ;
  int times ;
  float compound_interest;  
  

   printf("Enter the total amount:");
   scanf("%f",&amount);
   
   printf("Enter principal amount :");
   scanf("%f",&principle);
   
   printf("Enter time in years:");
   scanf("%d",&time);
   
   printf("Enter rate :");
   scanf("%f",&rate);
   
   printf("Enter times interest is compounded :"); 
   scanf("%d",&times);
   
//compound interest;
amount =principal * pow((1+rate/times),times * time);

compound_interest =amount - principle;
   printf("Total amoumt =%.2f",amount);
   printf("The compound interest =%.2f",compound_interest);
   
   
   
   return 0;
   }













