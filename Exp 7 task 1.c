/*Aim : WAP to find the Largest element in an array.
Name : Armaan shaikh
Roll no : 57
UIN : 241A066
Division :*/
#include<stdio.h>
int main()
{
    int n,i,a[100],large; //Integer Array of size 100
    printf("Enter the number of elements = ");
    scanf("%d",&n);

    for(i=0;i<=n-1;i++)
    {
        printf("Enter a value = ");
        scanf("%d",&a[i]);
    }
    large=a[0];
    for(i=1;i<=n-1;i++)
    {
        if(large<a[i])
            large=a[i];
    }
    printf("\nLargest Number is = %d",large);
    return 0;
}
