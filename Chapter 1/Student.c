// to calculate total marks and percentage in 5 subjects
#include<stdio.h>
int main (){
    float m1, m2, m3, m4, m5, totalMarks, Percentage;
    printf("\nEnter marks of 5 subjects in Sequence with space :");
    scanf("%f %f %f %f %f",&m1,&m2,&m3,&m4,&m5);
    totalMarks = m1+m2+m3+m4+m5;
    Percentage = (totalMarks/500)*100;
    printf("\nThe Total Marks are : %f",totalMarks);
    printf("\nThe Percentage is  : %f",Percentage);
    return 0;
}