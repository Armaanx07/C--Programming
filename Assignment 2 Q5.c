/*Name : Armaan shaikh
UIN / Roll no  / DIV : 241A0066/57/A/
Branch : F.E  (AI & DS)  
Question 5:C  program to check a specified file exists or not*/
#include <stdio.h>

int main() {
    char filename[100];
    FILE *file;

    // Input the filename
    printf("Enter the filename: ");
    scanf("%s", filename);

    // Try to open the file
    file = fopen(filename, "r");

    // Check if the file exists
    if (file) {
        printf("The file '%s' exists.\n", filename);
        fclose(file); // Close the file if it exists
    } else {
        printf("The file '%s' does not exist.\n", filename);
    }

    return 0;
}
/* Output
Ex -1:.Enter the filename: example.txt
The file 'example.txt' exists.

Ex-2: Enter the filename: nonexistent.txt
The file 'nonexistent.txt' does not exist.
