/*
Name: kipsemian Newton
Reg no: pa106/g/28743/25
Description: c function to calculatefare 
*/

#include<stdio.h>
//function to calculate fare

int calculatefare (int kilometers);

void main(){
 int kilometers;
 int fare;
 printf("Enter distance in kilometers covered  ");
 scanf("%d",&kilometers);

  fare = calculatefare(kilometers);
printf ("The total fare is %dksh",fare);
}

 int  calculatefare(int kilometers){
  int fare;
 fare = kilometers * 50;  
 return fare;
}
