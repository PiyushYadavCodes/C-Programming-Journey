// 3 points in straight line
// let say ABC 3 points hain if AB ka slope = BC ka slope then they are in straight line
#include<stdio.h>
int main(){
    float x1,y1,x2,y2,x3,y3,m1,m2;
    printf("\nEnter the Cordinates of all Three points let say A,B and C :");
    scanf("%f %f %f %f %f %f",&x1,&y1,&x2,&y2,&x3,&y3);
    m1 = (y2-y1)/(x2-x1);
    m2 = (y3-y2)/(x3-x2);
    if(m1 == m2){
        printf("\nThe Points are in straight line.");
    }
    else printf("\nThe Points are not in straight line.");
    return 0;
}