/*
Name: kipsemian Newton
Reg no: pa106/g/28743/25
Description: simple c program  prompting the user to key in a password using do while loop
*/

#include<stdio.h>

int main(){
//Declaration of variables 
int password =1234;
int attempt;

do{
  printf("Enter the password to log in. ");
  scanf ("%d",&attempt);
  
 if (password==attempt){
     printf("acesss granted \n");
     break;
 }
 else{
     printf("sorry,,incorrect password please try again\n");
     }


}
while(attempt!=password);

return 0;
}




