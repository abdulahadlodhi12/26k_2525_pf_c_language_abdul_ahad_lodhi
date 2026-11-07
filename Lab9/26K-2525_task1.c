#include<stdio.h>
float calculatediscount(float amount ,char membership);
float calculatefinalbill(float amount, float discountamount);
int main()
{
   char membership;
   float amount;
   printf("Enter the type of membership (p=platinum,g=gold,s=standard)");
   scanf(" %c",& membership);

   printf("Enter the shopping amount\n");
   scanf("%f",& amount);


float discountamount=calculatediscount(amount ,membership);
float finalbill=calculatefinalbill(amount, discountamount);

// show the discount before the final bill
printf("Discount amount is %.2f",discountamount);
printf("Final payable amount is %.2f",finalbill);

}
float calculatediscount(float amount ,char membership){

 float rate=0.0;
  if  (membership == 'p' || membership == 'p') {
        rate = 0.20;
    } else if (membership == 'g' || membership == 'g') {
        rate = 0.10;
    } else if (membership == 's' || membership == 's') {
        rate = 0.05;
    }

    if(amount >10000){

        rate = rate*0.02;
    }
     return amount*rate;
}
   float calculatefinalbill(float amount, float discountamount){
   float discountedamount = amount - discountamount;
    float tax = discountedamount * 0.15;
    float shipping = 0.0;

    // shipping is added only for smaller bills
    if (discountedamount <= 5000) {
        shipping = 300.0;
    }

    float finalpayable = discountedamount + tax + shipping;
    return finalpayable;

   }
