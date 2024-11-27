/*Aim :WAP to get students PCM marks from the user and find the average. Use conditional operator to print if the student is eligible for admission. Eligibility criteria is 50% in PCM.
Name : Armaan shaikh
Roll no : 57
UIN     : 241A066
Division: A*/
# include<stdio.h>
int main ()
{ int P,C,M,Avg;

     printf("ENTER PHYSICS MARKS:\n");
    scanf("%d",&P);
     printf("ENTER CHEMISTRY MARKS:\n");
    scanf("%d",&C);
    printf("ENTER MATHS MARKS:\n");
    scanf("%d",&M);
    Avg = (P + C + M)/3;
    printf("PCM Avg= %d",Avg);
    Avg>=50?printf("\nYou are eligible for admission"):printf("\nYou are not eligible for admission");
    
    return 0;
}

/*

 Expected Out put :
 ENTER PHYSICS MARKS:
 30
 ENTER CHEMISTRY MARKS:
 60
 ENTER MATHS MARKS:
  70
 PCM Avg= 53
 You are eligible for admission
 [Process completed - press Enter]

