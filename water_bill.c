/*

Name: kipsemian Newton
Reg no: pa106/g/28743/25
Description: simple c program for water company charges on consumers 

*/

#include<stdio.h>

int main(){
//Declaration of variables 
int unitsconsumed;
float shillings;
float total;


//prompt the user to enter number of water units consumed;
  printf("Enter the number of water units consumed:  ");
  scanf("%d",&unitsconsumed);

//conditions;
  if (unitsconsumed<=30)(shillings= 20 * unitsconsumed);
  else if (unitsconsumed>=31 && unitsconsumed <=60)(shillings =25 * unitsconsumed);
  else(shillings =30 * unitsconsumed);
  
  printf("The total bill in shillings is: %.2f",shillings);



return 0;
}