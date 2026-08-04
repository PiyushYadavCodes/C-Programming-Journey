// a point (x,y) is given find if its on X-axix , y-axis or origin
#include<stdio.h>
int main(){
    float x,y;
    printf("\nEnter the co-ordinates of the Point : ");
    scanf("%f %f",&x,&y);
    if(y == 0.00){
        if(x==0){
            printf("\nThe point lies on Origin (0,0)");
        }
        else printf("\nThe point lies on the X - Axis.");
    }
    else printf("\nThe Point lies on the Y-Axis");
    return 0;
}