/*
Name: kipsemian Newton
Reg no: pa106/g/28743/25
Description: c program displaying guess game 
*/

#include<stdio.h>

int main (){
int guess;
int secret=13;
int attempts=0;

while(guess!=secret)
{printf("guess a number 1_20. ");
   scanf("%d",&guess);
   attempts+=1;
   
 
 if (guess==secret){
   printf("congratulations you found the number in %d  attempts",attempts);
   }  
   
 else if (guess>=16){
   printf("Too high , Try again\n");}
   
 else if (guess<=10){
    printf("Too low,  Try again\n");} 
    
    
 else{
    printf("you are almost there but not yet\n ");}
    

}


return 0;
}