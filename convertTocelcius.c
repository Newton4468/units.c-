/*
Name: kipsemian Newton
Reg no: pa106/g/28743/25
Description: c function convertTocelcius
*/

#include<stdio.h>
//function convertTocelcius 
float convertTocelcius (float temperature);

void main(){
float temperature;
float celcius;

printf ("Enter the temperature in Fahrenheit ");
scanf("%f",&temperature);

celcius =convertTocelcius (temperature);

printf("The celcius is %.2f °c",celcius );

}
 float convertTocelcius (float temperature){

 float celcius;
 celcius =(temperature-32) * 5.0/9.0;
 
 return celcius; 
 
 }