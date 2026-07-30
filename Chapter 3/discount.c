// if a certain item is purchased more than 1000 ....10% discount is given....quantity and price per item is 
// entered by the user we have to calculate total expense
#include<stdio.h>
int main(){
    int quantity,discount;
    float price,totalExpenz;
    printf("\nEnter the Quantity of the item and Price of the item : ");
    scanf("%d %f",&quantity,&price);
    if(quantity > 1000){
        discount = 10;
    }
    else discount = 0;
    totalExpenz = quantity*price - (quantity*price*discount/100);
    printf("\nThe totalexpenz is : %.2f",totalExpenz);
    return 0;
}