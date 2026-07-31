//A shopkeeper gives a 10% discount on the marked price of an item. After the discount, 18% GST is applied to the discounted price.
//Write a C program that:

//Takes the marked price as input.
//Calculates the discount amount.
//Calculates the price after discount.
//Calculates the GST amount.
//Displays the final amount to be paid.

#include<stdio.h>
int main(){
    float marketPrice,discountAmount,GSTamount,finalAmount;
    printf("\nEnter the market Price of the item : ");
    scanf("%f",&marketPrice);
    discountAmount = (10*marketPrice)/100;
    GSTamount =  (18*(marketPrice-discountAmount))/100;
    finalAmount = (marketPrice - discountAmount) + GSTamount;
    printf("\nThe market price is %.2f",marketPrice);
    printf("\nThe Discount Amount is %.2f.",discountAmount);
    printf("\nThe Amount after discount is %.2f.",marketPrice-discountAmount);
    printf("\nThe GST Amount is %.2f.",GSTamount);
    printf("\nThe Final Amount is %.2f.",finalAmount);
    return 0;
}