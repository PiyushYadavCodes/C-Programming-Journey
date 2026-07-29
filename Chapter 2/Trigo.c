// if a value of an angle is input through the keyboard print all its trignometric functions
#include<stdio.h>
#include<math.h>
#define PI 3.14159
int main(){
    float a;
    printf("\nEnter the Value of Angle : ");
    scanf("%f",&a);
    a = (a * PI) / 180; // // Convert angle from degrees to radians
    printf("\nSin %.2f is : %.3f",a,sin(a));
    printf("\nCos %.2f is : %.3f",a,cos(a));
    printf("\nTan %.2f is : %.3f",a,tan(a));
    printf("\nCot %.2f is : %.3f",a,1/tan(a));
    printf("\nSec %.2f is : %.3f",a,1/cos(a));
    printf("\nCosec %.2f is : %.3f",a,1/sin(a));
    return 0;
}