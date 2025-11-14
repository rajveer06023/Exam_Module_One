//Write a c program to find the amount of bill .

#include<stdio.h>
int main(){
    int unit,surcharge,bill_amount;
    printf("enter the unit conjuptions :");
    scanf("%d", &unit);

    if(unit <= 50)
    bill_amount = 0.5*unit;

    if(unit > 50 && unit <= 150)
    bill_amount = 0.75*unit;

    if(unit > 150 && unit <= 250)
    bill_amount = 1.20*unit;

    if(unit > 250)
    bill_amount = 1.50*unit;

    surcharge = 0.20*bill_amount; //For all unit surcharge will same // surcharge adding on bill amount 
    
    bill_amount = bill_amount + surcharge;

    printf("the total amount of the bill is = %d", bill_amount);


    return 0;
}