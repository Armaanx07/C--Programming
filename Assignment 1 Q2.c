/*Write a C program to calculate salary of an employee with name.
Write an algorithm & draw a flowchart for the same.
Name : Armaan shaikh
UIN / Roll no  / DIV : 241A0066/ 57 / A
Branch : F.E  (AI & DS)  */
#include <stdio.h>
int main()
{
char name [100];
float basicSalary, hra, da, pf, grossSalary;
// Input employee details
printf("Enter name: ");
scanf("%s",  &name);
printf("Enter Basic Salary: ");
scanf("%f", &basicSalary);
printf("Enter HRA: ");
scanf("%f", &hra);
printf("Enter D.A.: ");
scanf("%f", &da);
// Calculate Provident Fund (PF) as 12% of the basic salary
pf = 0.12 * basicSalary;
// Calculate gross salary
grossSalary = basicSalary + hra + da + pf;
// Output the details
printf("\nName: %s", name);
printf("BASIC: %.6f\n", basicSalary);
printf("HRA: %.6f\n", hra);
printf("DA: %.6f\n", da);
printf("PF: %.6f\n", pf);
printf("***GROSS SALARY: % .6f ***\n", grossSalary);
return 0;
}
/*
----Output----
Enter name: Mike
Enter Basic Salary: 23000
Enter HRA: 9500
Enter D.A.: 9500
Name: Mike
BASIC: 23000.000000
HRA: 9500.000000
DA: 9500.000000
PF: 2760.000000
***GROSS SALARY: 44760.000000*** */