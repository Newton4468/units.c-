/*
Name: kipsemian Newton
Reg no: pa106/g/28743/25
Description: 1D array to display revenue 
*/

#include<stdio.h>

int main() {
    int i;
    int sum = 0;
    char *days[7]={"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};
    int revenue[7] = {1000, 2500, 3500, 4000, 5590, 5000, 8000};
    int average =0;
    
        // start;stop;step
    for (i = 0; i < 7; i++) {
        printf(" %s,revenue =%d\n",days[i], revenue[i]);
        sum = sum + revenue[i];
        average =sum/7;
    }
    
    

    printf("Total revenue = %d\n", sum);
    printf ("The average is %d",average);
    return 0;
}