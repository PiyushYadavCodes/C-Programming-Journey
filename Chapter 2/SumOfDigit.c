//IF a 5 digit num is entered through computer wite a program to sum 
#include<stdio.h>
int main(){
    int num;
    int n1,n2,n3,n4,n5;
    printf("\nEnter a Five Digit Number : ");
    scanf("%d",&num);
    n1 = num%10;
    num = num/10;
    n2 = num%10;
    num = num/10;
    n3 = num%10;
    num = num/10;
    n4 = num%10;
    num = num/10;
    printf("\nThe sum of Digits is : %d",(n1+n2+n3+n4+num));
    return 0;
}