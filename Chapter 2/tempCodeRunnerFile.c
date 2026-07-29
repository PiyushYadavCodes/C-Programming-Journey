// if a value of an angle is input through the keyboard print all its trignometric functions
#include<stdio.h>
#include<math.h>
int main(){
    float a;
    printf("\nEnter the Value of Angle : ");
    scanf("%f",&a);
    printf("Sin %d is : %f",a,sin(a));
    printf("Cos %d is : %f",a,cos(a));
    printf("Tan %d is : %f",a,tan(a));
    printf("Cot %d is : %f",a,1/tan(a));
    printf("Sec %d is : %f",a,1/cos(a));
    printf("Cosec %d is : %f",a,1/sin(a));
    return 0;
}