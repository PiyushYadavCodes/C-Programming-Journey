// a five digit number is entered throuh the keyboard write a program to reverse and check wether the input and reversed num is same 
#include<stdio.h>
int main(){
    int inputNum,temp,num,rev;
    printf("\nEnter a five digit number : ");
    scanf("%d",&inputNum);
    num = inputNum;
    rev = 0;
    temp = num/10000;
    num = num%10000;
    rev = rev+temp;

    temp = num/1000;
    num = num%1000;
    rev = rev+temp*10;

    temp = num/100;
    num = num%100;
    rev = rev+temp*100;

    temp = num/10;
    num = num%10;
    rev = rev+temp*1000+(num*10000);
    printf("\nThe Reverse of number %d is %d",inputNum,rev);
    if(inputNum == rev){
        printf("\nThe original Number and reverse number is same.");
    }
    else printf("\nThe Original Number and Reverse number is not same.");
    return 0;
}