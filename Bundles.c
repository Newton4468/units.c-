/*

Name: kipsemian Newton
Reg no: pa106/g/28743/25
Description: simple c program  for a local mobile service provider offering different data bundles

*/

#include<stdio.h>

int main(){
//Declaration of variables 
int cost;
float bundle; 
int choice;

  printf("select data bundle\n");
  printf("1. 1000MB @ 50 KES\n");
  printf("2. 500MB @ 200 KES\n");
  printf("3. 1GB @ 350 KES\n");
  printf("4. 2GB @ 600 KES\n");
  
  printf("Enter your choice (1-4): ");
  scanf("%d",&choice);
 
 if (choice==1){
     bundle =1000.0;
     cost=50;
     printf("you selected %.1fMB,cost %d KES\n",bundle,cost);
     }
  else if(choice ==2){
      bundle =500.0;
      cost =200;
      printf("you selected %.1fMB,cost %KES\n",bundle, cost);
      }
  else if(choice ==3){
      bundle =1024.0;
      cost =350;
      printf("you selected %.1fMB,cost %dKES\n",bundle, cost);
      }
  else if (choice ==4){
       bundle =2048.0;
       cost=600;
       printf ("you selected %.1fMB,cost %dKES\n",bundle, cost );
       }
  else
       printf ("invalid choice\n");   
       
       

return 0;
}