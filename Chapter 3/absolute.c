//Find absolute value of a number entered 
#include<stdio.h>
int main(){
    int a;
    printf("\nEnter a Number : ");
    scanf("%d",&a);
    if(a<0){
        printf("\nThe absolute value is %d",(-1*a));
    }
    else printf("\nThe absolute value is %d",a);
    return 0; 
}