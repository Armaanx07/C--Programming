/*Name : Armaan shaikh
UIN / Roll no  / DIV : 241A0066/57/A/
Branch : F.E  (AI & DS)  
Question 3-C program to add two distances in feet and inches using structure*/
#include <stdio.h>

// Define a structure to represent a distance
struct Distance {
    int feet;
    float inches;
};

// Function to add two distances
struct Distance addDistances(struct Distance d1, struct Distance d2) {
    struct Distance result;

    // Add feet and inches
    result.feet = d1.feet + d2.feet;
    result.inches = d1.inches + d2.inches;

    // Convert inches to feet if greater than or equal to 12
    if (result.inches >= 12.0) {
        result.feet += (int)(result.inches / 12);
        result.inches = (int)result.inches % 12 + (result.inches - (int)result.inches);
    }

    return result;
}

int main() {
    struct Distance d1, d2, result;

    // Input the first distance
    printf("Enter the first distance (feet and inches): ");
    scanf("%d %f", &d1.feet, &d1.inches);

    // Input the second distance
    printf("Enter the second distance (feet and inches): ");
    scanf("%d %f", &d2.feet, &d2.inches);

    // Add the distances
    result = addDistances(d1, d2);

    // Display the result
    printf("The total distance is: %d feet and %.2f inches\n", result.feet, result.inches);

    return 0;
}
/*
 Out put 
  Ex-1 
 Enter the first distance (feet and inches): 5 8.5
Enter the second distance (feet and inches): 6 9.7
The total distance is: 12 feet and 6.20 inches
