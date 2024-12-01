/*Name : Armaan shaikh
UIN / Roll no  / DIV : 241A0066/57/A/
Branch : F.E  (AI & DS)  
Question 4Write a C program to count vowels and consonants in a strin using pointer.*/
#include <stdio.h>
#include <ctype.h>

// Function to count vowels and consonants
void countVowelsAndConsonants(char *str, int *vowels, int *consonants) {
    *vowels = 0;
    *consonants = 0;

    char *ptr = str;
    while (*ptr != '\0') {
        char ch = tolower(*ptr); // Convert character to lowercase for easy comparison

        if (ch >= 'a' && ch <= 'z') { // Check if it's an alphabet
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                (*vowels)++;
            } else {
                (*consonants)++;
            }
        }
        ptr++; // Move to the next character
    }
}

int main() {
    char str[100];
    int vowels, consonants;

    // Input the string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Count vowels and consonants
    countVowelsAndConsonants(str, &vowels, &consonants);

    // Display the result
    printf("Number of vowels: %d\n", vowels);
    printf("Number of consonants: %d\n", consonants);

    return 0;
}
/* 
Out put 
Ex 1 - Enter a string: Hello World
Number of vowels: 3
Number of consonants: 7
Ex-2- Enter a string: C Programming
Number of vowels: 3
Number of consonants: 9
