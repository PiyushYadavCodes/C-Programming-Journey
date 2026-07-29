//value of latitude(l1 l2) and longitude (g1 g2) in degrees and output the distance b/w them in nautical miles
// formula for nautical miles is D = 3963 cos inverse (sin L1 sin L2 + cos L1 cos L2 * cos (G2 - G1))
//Radians = Degrees × π / 180
#include<stdio.h>
#include<math.h>
#define PI 3.14159
int main(){
    float L1,L2,G1,G2,Distance;
    printf("\nEnter the Latitude L1 and L2 : ");
    scanf("%f %f",&L1,&L2);
    printf("\nEnter the Longitude G1 and G2 : ");
    scanf("%f %f",&G1,&G2);
    L1 = (L1*PI)/180;
    L2 = (L2*PI)/180;
    G1 = (G1*PI)/180;
    G2 = (G2*PI)/180;
    Distance = 3963*acos(sin(L1)*sin(L2)+cos(L1)*cos(L2)*cos(G2-G1));
    printf("\nThe Distance in Nautical Miles is %f",Distance);
    return 0;
}