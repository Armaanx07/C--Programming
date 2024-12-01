/*Name : Armaan shaikh
UIN / Roll no  / DIV : 241A0066/57/A/
Branch : F.E  (AI & DS)  
Question 2 -Write a program in c language to accept a string, copy it into another string and display this new string.*/
#
#include <stdio.h>
#include <string.h>

int main() {
    char original[100], copy[100];

    // Input the original string
    printf("Enter a string: ");
    fgets(original, sizeof(original), stdin);

    // Remove the newline character added by fgets (if present)
    size_t len = strlen(original);
    if (len > 0 && original[len - 1] == '\n') {
        original[len - 1] = '\0';
    }

    // Copy the original string into the copy string
    strcpy(copy, original);

    // Display the new string
    printf("The new string is: %s\n", copy);

    return 0;
}
/* 
Output
Enter a string: Hello, World!
The new string is: Hello, World!
*/