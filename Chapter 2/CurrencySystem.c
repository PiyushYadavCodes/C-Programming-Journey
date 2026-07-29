// we have notes of rupees 1,2,5,10,50,100. a number is enterd we have to find out that how many minimumc
//coin is needed for that number /amount
#include<stdio.h>
int main(){
    int Amount;
    printf("\nEnter the Amount : ");
    scanf("%d",&Amount);
    int quo1,quo2,quo3,quo4,quo5,quo6;
    int remi1,remi2,remi3,remi4,remi5,remi6;
    quo1 = Amount/100; remi1 = Amount - (100*quo1);
    quo2 = remi1/50; remi2 = remi1 - (50*quo2);
    quo3 = remi2/10; remi3 = remi2 - (10*quo3);
    quo4 = remi3/5; remi4 = remi3 - (5*quo4);
    quo5 = remi4/2; remi5 = remi4 - (2*quo5);
    quo6 = remi5/1; remi6 = remi5 - (1*quo6);
    printf("\nTotal smallest number of notes required are : %d",(quo1+quo2+quo3+quo4+quo5+quo6));
    printf("\nNumber of 100 rupee notes needed is : %d",quo1);
    printf("\nNumber of 50 rupee notes needed is : %d",quo2);
    printf("\nNumber of 10 rupee notes needed is : %d",quo3);
    printf("\nNumber of 5 rupee notes needed is : %d",quo4);
    printf("\nNumber of 2 rupee notes needed is : %d",quo5);
    printf("\nNumber of 1 rupee notes needed is : %d",quo6);
    return 0;
}