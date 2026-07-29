// we have to calculate the wind chill factor 
// user inputs velocity and temperature
// wcf = 35.74 + 0.6215*t + (0.4275t - 35.75)*pow(v,0.16);
#include<stdio.h>
#include<math.h>
int main(){
    float t,v,wcf;
    printf("\nEnter the Temperature and Velocity of Wind : ");
    scanf("%f %f",&t,&v);
    wcf = 35.74 + 0.6215*t + (0.4275*t - 35.75)*pow(v,0.16);
    printf("\nThe Wind Chill Factor is : %f",wcf);
    return 0;
}