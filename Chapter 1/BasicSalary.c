// Program to calculate Basic salary of Ramesh 
#include <stdio.h>
int main(){
float basicSalary, DA, HRA, grossSalary;
printf("\nEnter Your Basic Salary : ");
scanf("%f",&basicSalary);
DA = (40*basicSalary)/100;
HRA = (20*basicSalary)/100;
grossSalary = basicSalary+DA+HRA;
printf("\nYour Gross Pay is %f",grossSalary);
return 0;
}