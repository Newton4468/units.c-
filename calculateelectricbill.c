/*
Name: kipsemian Newton
Reg no: pa106/g/28743/25
Description: c function to calculateelectricbill 
*/

#include<stdio.h>
//function to calculate electric bill
float calculateelectricbill (int units);
void main (){
int units;
int bill;
printf("Enter the amount of units consumed ");
scanf("%d",&units);

bill=calculateelectricbill(units);

printf("The bill is %d",bill);


}


float calculateelectricbill(int units ){
int bill;
if (units<=100){
bill=units * 10;}

else if(units<=200){
bill=(100 * 10 )+((units-100) * 15);} 

else{
bill=(100*10)+(200*15)+((units-200) * 20);}

return bill;

}
    