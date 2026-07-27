// Distance conversion in  meter feet inches and centimeters
#include<stdio.h>
int main (){
    float Distance,m,inch,feet,cm;
    printf("\nEnter the Distance Between City A and City B in kilometers : ");
    scanf("%f",&Distance);
    m = Distance*1000;
    inch = 39370.1*Distance;
    feet = 3280.84*Distance;
    cm = 100000*Distance;
    printf("\nDistance in Meter is %f",m);
    printf("\nDistance in Feet is %f",feet);
    printf("\nDistance in Inches is %f",inch);
    printf("\nDistance in Centimeters is %f",cm);
    return 0;
}