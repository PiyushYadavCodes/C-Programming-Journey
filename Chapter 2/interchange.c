// two numbers are input in C and D we have to interchange
#include<stdio.h>
int main(){
    int C,D,E;
    printf("\nEnter a Number in Box C : ");
    scanf("%d",&C);
    printf("\nEnter a Number in Box D : ");
    scanf("%d",&D);
    E = C;
    C = D;
    D = E;
    printf("\nNow, C is %d and D is %d",C,D);
    return 0;
}