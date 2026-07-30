//An integer is input ,.find wether its odd or even
#include<stdio.h>
int main(){
    int n;
    printf("\nEnter the Number : ");
    scanf("%d",&n);
    if (n%2 == 0){
        printf("\n%d is an Even number.",n);
    }
    else
    printf("\n%d is an Odd number.",n);
    return 0;
}