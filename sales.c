/*
Name: kipsemian Newton
Reg no: pa106/g/28743/25
Description: c program displaying transaction file 
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    float transaction, total_sales = 0;
    FILE *fptr;

    // open file for reading and appending
    fptr = fopen("sales.txt", "a+");
    if (fptr == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    printf("Enter the amount of transaction: ");
    scanf("%f", &transaction);

    total_sales += transaction;
    printf("Total sales is %.2f\n", total_sales);

    fprintf(fptr, "Transaction: %.2f\nTotal Sales: %.2f\n", transaction, total_sales);
    printf("The transaction has been successfully added to the file.\n");

    fclose(fptr);
    return 0;
}