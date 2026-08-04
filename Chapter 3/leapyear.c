//To find if the year entered is a leap year or not
#include<stdio.h>
int main(){
    int year;
    printf("\nEnter the Year : ");;
    scanf("%d",&year);
    if(year %100 == 0){
        if(year%400 == 0){
            printf("\n%d is a leap Year.",year);
        }
        else printf("\n%d is not a leap Year.",year);
    }
    else{
        if(year %4 == 0){
            printf("\n%d is a leap year.",year);
        }
        else printf("\n%d is not a leap Year.",year);
    }
    return 0;
}