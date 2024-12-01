/*Name : Armaan shaikh
UIN / Roll no  / DIV : 241A0066/57/A/
Branch : F.E  (AI & DS)  
OR write a program to implement sequential search algorithm. Also write an algorithm and draw a flowchart for same.*/
#include <stdio.h>

// Function to perform sequential search
int sequentialSearch(int arr[], int size, int element) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == element) {
            return i; // Return the index of the element
        }
    }
    return -1; // Element not found
}

int main() {
    int size, element, index;

    // Input the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    // Input the elements of the array
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Input the element to be searched
    printf("Enter the element to be searched: ");
    scanf("%d", &element);

    // Perform the search
    index = sequentialSearch(arr, size, element);

    // Display the result
    if (index != -1) {
        printf("Element found at index %d\n", index);
    } else {
        printf("Element not found in the array\n");
    }

    return 0;
}
