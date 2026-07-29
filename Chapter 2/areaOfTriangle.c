// 3 sides are entered by user then we print the area of triangle
#include<stdio.h>
#include<math.h>
int main(){
    float s,side1,side2,side3,Area; 
    printf("\nENTER THREE SIDES OF TRIANGLES : ");
    scanf("%f %f %f",&side1,&side2,&side3);
/*To find the area of a triangle when you only know the lengths of its three sides, you must use Heron's Formula. 
Let the lengths of the three sides be side1,side2,side3 
and  
1. Calculate the Semi-Perimeter
First, find the semi-perimeter  i.e s = (side1+side2+side3)/2
then;
2. Apply Heron's Formula
area = sqrt (s(s-side1)(s-side2)(s-side3))    */
 s = (side1+side2+side3)/2;
 Area = sqrt (s*(s-side1)*(s-side2)*(s-side3));
 printf("\nThe area of Triangle is : %f",Area);
}