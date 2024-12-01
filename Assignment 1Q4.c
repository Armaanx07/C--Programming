/*Write a C program to print the following Pyramid:
Name : Armaan shaikh
UIN / Roll no  / DIV : 241A0066/57/A/
Branch : F.E  (AI & DS)  */
#include <stdio.h>

int fibonacci(int n) {
    if (n == 0) {  // Fixed the condition to n == 0
        return 0;
    } else if (n == 1) {  // Fixed the condition to n == 1
        return 1;
    } else {
        return fibonacci(n-1) + fibonacci(n-2);  // Corrected recursion
    }
}

int main() {
    int terms, i;

    // Ask the user to enter the number of terms
    printf("Enter total number of terms: ");
    scanf("%d", &terms);

    printf("Fibonacci series is: ");

    // Loop through the range and print Fibonacci numbers
    for (i = 0; i < terms; i++) {
        printf("%d ", fibonacci(i));
    }

    printf("\n");
    return 0;
}

/*
Enter total number of terms: 10
Fibonacci series is: 0 1 1 2 3 5 8 13 21 34 */