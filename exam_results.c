/*
Name: kipsemian Newton
Reg no: pa106/g/28743/25
Description: c program displaying exam results  file for university students 
*/



#include <stdio.h>
#include <stdlib.h>

int main() {
    // Declaration of variables
   char student_name[50];
   char choice;
   int reg_number;
   int total_marks;
   
   FILE *fptr;
   // file opening 
   fptr=fopen("results.txt" , "wb");
   
   if(fptr==NULL){
   printf("Error during file opening ");
   return 0;
   }
   // Taking users inputs
     do{
    printf("enter your name:\n");
    scanf("%49s",&student_name);
    
     
    printf("enter your reg number:\n");
    scanf("%d",&reg_number);
    
     
    printf("enter your total marks:\n");
    scanf("%d",&total_marks);
    
    // Writing into the file
    fprintf(fptr, "the user entered %s",student_name);
    fprintf(fptr, "the user entered %d",reg_number);
    fprintf(fptr, "the user entered %d",total_marks);
    
    
    printf("create another record ?:(y/n)\n");
    scanf(" %c",&choice);
    
    }
    while (
    choice=='y'||choice =='Y');
    
    fclose(fptr);
    printf("The file has been created successfully ");
    
    return 0;
}