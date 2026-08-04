//to check if the entered sides forms a triangle or not
// a triangle is valid when sum of all its angle is 180 deg.
#include<stdio.h>
int main(){
    float a,b,c;
    printf("\nEnter the angles of triangle : ");
    scanf("%f %f %f",&a,&b,&c);
    if((a+b+c == 180.00)){
        printf("\nIts a Valid Triangle.");
    }
    else
    printf("\nIts a InValid Triangle.");
    return 0;
}