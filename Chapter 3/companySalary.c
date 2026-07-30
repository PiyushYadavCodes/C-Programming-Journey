// in a company an employe is paid as if his basic salary is less than Rs. 1500 then HRA = 10% of BS,
// and DA = 90% of BS and if his salary is equal or above 1500 then HRA = Rs 500 and DA = 98% of BS,
// if Salary is input by employee write a program to find gross salary
#include<stdio.h>
int main(){
    float salary,grossSalary;
    printf("\nEnter your Basic Salary : ");
    scanf("%f",&salary);
    if(salary < 1500){
        grossSalary = salary + (10*salary)/100 + (90*salary)/100;
        printf("\nThe Gross salary is %.2f",grossSalary);
    }
    else{
        grossSalary = salary + 500 + (98*salary)/100;
        printf("\nThe Gross salary is %.2f",grossSalary);
    }
    return 0;
}