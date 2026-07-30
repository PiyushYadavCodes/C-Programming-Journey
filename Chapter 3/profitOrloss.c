//Cost price and selling price is input through the keyboard write a program to determine wether the seller 
// made a profit or loss also find how much profit/loss he made.
#include<stdio.h>
int main(){
    float CP,SP,Profit,Loss;
    printf("\nEnter the Cost price and Selling price of the item : ");
    scanf("%f %f",&CP,&SP);
    if(CP == SP){
        printf("\nThe dealer made no Proft and no Loss");
    }
    else{
         if(CP < SP){
        Profit = SP-CP;
        printf("\nThe dealer made a proft of Rupees : %.2f",Profit);
    }
    else {
        Loss = CP-SP; 
        printf("\nThe dealer made a loss of Rupees : %.2f",Loss);
    }
    }
    return 0;
} 