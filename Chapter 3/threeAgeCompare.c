//ages of ram, shyam ,and Ajay are input through the keyboard find who is youngest.
#include<stdio.h>
int main(){
    int ageOfRam, ageOfShyam, ageOfAjay;
    printf("\nEnter the age of Ram, Shyam and Ajay : ");
    scanf("%d %d %d",&ageOfRam,&ageOfShyam,&ageOfAjay);
    if (ageOfAjay < ageOfShyam){
        if(ageOfAjay < ageOfRam){
            printf("\nAjay is the Youngest.");
        }
    }
    if(ageOfRam<ageOfAjay){
            if(ageOfRam<ageOfShyam){
                printf("\nRam is Youngest.");
            }
    }
    if(ageOfShyam<ageOfAjay){
            if(ageOfShyam<ageOfRam){
                printf("\nShyam is Youngest.");
            }
    }
        return 0;
    }

