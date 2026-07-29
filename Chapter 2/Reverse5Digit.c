// a five digit is entered we have to reverse the number
#include<stdio.h>
int main(){
    int n;
    printf("\nEnter a five digit number :");
    scanf("%d",&n);
    int r5,r4,r3,r2,q5,q4,q3,q2;
    r5 = n%10; q5 = n/10;
    r4 = q5%10; q4 = q5/10;
    r3 = q4%10; q3 = q4/10;
    r2 = q3%10; q2 = q3/10;
    printf("THE REVERSE OF NUMBER YOU ENTERED IS : %d",(r5*10000)+(r4*1000)+(r3*100)+(r2*10)+q2);
}