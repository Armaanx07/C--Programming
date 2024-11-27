/*Aim : WAP to find if entered number is even or odd.

Name    : Armaan shaikh
Roll no :57
UIN     :241A066
Division:A
*/

#include<stdio.h>
int main()
{
    int num;
    printf("\t\t\t*****EVEN ODD FINDER*****\n\n\n");
    printf("Enter a Number=");
    scanf("%d",&num);
    if(num%2==0)
        printf("%d is Even",num);
    else
        printf("%d is Odd",num);
    return 0;
}
/*
Expected Output 1:
    *****EVEN ODD FINDER*****


    Enter Number:12
    12 is Even

Expected Output 2:
    *****EVEN ODD FINDER*****


    Enter Number:13
    13 is Odd
*/
