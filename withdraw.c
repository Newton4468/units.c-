/*
Name: kipsemian Newton
Reg no: pa106/g/28743/25
Description: c program displaying bank withdrawals using while loop
*/

#include<stdio.h>

int main (){
int balance=1500;
int amount ;

while(balance!=amount){
printf ("Enter amount to withdraw ");
scanf("%d",&amount);

if(amount==balance){
printf("successful the balance is 0.00");
}

else if (amount>balance){
printf("insufficient funds in your account, your current balance is %d\n",balance);
}
 else if(balance-=amount){
printf("The balance is %d\n" ,balance);}



}



return 0;
}