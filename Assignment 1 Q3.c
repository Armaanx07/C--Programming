/*Write a C program to read age of 15 person and count total Baby age,
School age and adult age. (Hint: While loop)
Write an algorithm & draw a flowchart for the same.
Name : Armaan shaikh
UIN / Roll no  / DIV : 241A066/ 57/A
Branch : F.E  (AI & DS)  */
#include <stdio.h>
int main()
{
    int age;
    int babyCount = 0, schoolAgeCount = 0, adultCount = 0;
    int i = 0;

    while (i < 15)
    {
        printf("Enter the age of person [%d]: ", i + 1);
        scanf("%d", &age);

        if (age < 3)
        {
            babyCount++;
        }
        else if (age >= 4 && age < 16)
        {
            schoolAgeCount++;
        }
        else
        {
            adultCount++;
        }
        i++;
    }

    printf("\nBaby age: %d\n", babyCount);
    printf("School age: %d\n", schoolAgeCount);
    printf("Adult age: %d\n", adultCount);
    return 0;
}

/*
****Output****
Enter the age of person [1]: 0
Enter the age of person [2]: 1
Enter the age of person [3]: 2
Enter the age of person [4]: 3
Enter the age of person [5]: 44
Enter the age of person [6]: 55
Enter the age of person [7]: 66
Enter the age of person [8]: 44
Enter the age of person [9]: 12
Enter the age of person [10]: 13
Enter the age of person [11]: 14
Enter the age of person [12]: 55
Enter the age of person [13]: 66
Enter the age of person [14]: 18
Enter the age of person [15]: 19
Baby age: 4
School age: 3
Adult age: 8 */