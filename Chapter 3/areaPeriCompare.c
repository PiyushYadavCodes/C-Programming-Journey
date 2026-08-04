//Comapre area and perimeter of a rectangle
#include<stdio.h>
int main(){
    float a,b,area,perimeter;
    printf("\nEnter the length and breadth of Rectangle : ");
    scanf("%f %f",&a,&b);
    area = a*b;
    perimeter = 2.0*(a+b);
    if(area >= perimeter){
        if(area>perimeter){
            printf("\nThe Area of rectangle with length %.2f and breadth %.2f is Greater than its perimeter. ",a,b);
        }
        else{
            printf("\nThe Area of rectangle with length %.2f and breadth %.2f is Equal to its perimeter. ",a,b);
        }
    }
    else{
            printf("\nTh Area of rectangle with length %.2f and breadth %.2f is less than its perimeter. ",a,b);
    }
    return 0;
}