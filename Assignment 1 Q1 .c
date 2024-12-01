/*Write a C program to convert specified days into years, weeks and days. Write an algorithm & draw a
flowchart for the same.
Name : Armaan shaikh
UIN / Roll no  / DIV : 241A0066 / 57/ A
Branch : F.E  (AI & DS) */
#include <stdio.h>
int main()
{
int days, years, weeks, numofdays;
// Ask user for input
printf("Enter the number of days: ");
scanf("%d", & numofdays);
years = numofdays / 365;
weeks = (numofdays % 365) / 7;
days = (numofdays % 365) % 7;
// Output the result
printf("Number of days %d \n", numofdays);
printf("Years:%d \n", years);
printf("Weeks: %d \n", weeks );
printf("Days:%d \n",days );
return 0;
}
/*
***---output---***
Enter the number of days: 1329
Number of days:1329
Years:3
Weeks:33
Days: 3 */