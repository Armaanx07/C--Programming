/*Write a C program to print the following Pyramid:
Name : Armaan shaikh
UIN / Roll no  / DIV : 241A0066/57/A/
Branch : F.E  (AI & DS)  */
#include <stdio.h>

int main() {
    int i, j, rows = 5;  // Number of rows for the pyramid

    for(i = 1; i <= rows; i++) {  // Loop for each row
        for(j = 1; j <= i; j++) {  // Loop for each column in the row
            printf("* ");  // Print a star
        }
        printf("\n");  // Move to the next line after each row
    }

    return 0;
}
/*
Output
*
* * 
* * * 
* * * * 
* * * * * 
*/
