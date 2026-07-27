#include<stdio.h>
int main (){
    float  length, breadth, radius;
    printf("\nEnter Length breadth and Radius : ");
    scanf("%f %f %f",&length,&breadth,&radius);
    printf("\nArea and perimeter of Rectangle is %f and %f",length*breadth,2*(length+breadth));
    printf("\nArea and circumferenfe is %f and %f ",3.14*radius*radius,2*3.14*radius);
    return 0;
}