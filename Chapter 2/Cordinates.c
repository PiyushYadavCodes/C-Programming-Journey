//Recieve cartesian cordinates (x,y) of a point and Convert them in Polar Cordinates (r,q)
#include<stdio.h>
#include<math.h>
int main(){
    float x,y,r,q;
    printf("\nEnter the Cartesian Cordinates (X,y) : ");
    scanf("%f %f",&x,&y);
    r = sqrt((x*x)+(y*y)); q = atan(y/x); // atan means tan^-1 in C
    printf("\nThe Polar Co-ordinates are : (%f, %f)",r,q);
    return 0;
}