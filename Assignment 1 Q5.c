/*Write a C program to print Fibonacci series using recursion.
Name : Armaan shaikh
UIN / Roll no  / DIV : 241A0066/57/A/
Branch : F.E  (AI & DS)  */
#include <stdio.h>

// Recursive function to calculate Fibonacci numbers
int fibonacci(int n) {
    if (n == 0) {
        return 0;  // Base case for n = 0
    } else if (n == 1) {
        return 1;  // Base case for n = 1
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);  // Recursive case
    }
}

int main() {
    int terms, i;

    // Ask the user to enter the number of terms
    printf("Enter total number of terms: ");
    scanf("%d", &terms);

    // Print Fibonacci series
    printf("Fibonacci series is: ");
    for (i = 0; i < terms; i++) {
        printf("%d ", fibonacci(i));
    }
    printf("\n");

    return 0;
}
/*
out put
Enter total number of terms: 10
Fibonacci series is: 0 1 1 2 3 5 8 13 21 34
*/
