//Take input form user in Fahrenheit and conver it into degree celcious 
#include<stdio.h>
int main(){
    float F,C;
    printf("\nEnter the Temperature in Fahrenheit : ");
    scanf("%f",&F);
    C = ((F-32)*5)/9;
    printf("The temperature in Celcius is : %f",C);
    return 0;
}