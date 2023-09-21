#include <stdio.h>

int main() {
    float price, discount, discounted_price, total_price;


    printf("Enter the price of the product:\n");
    scanf("%f",&price);
    printf("Enter the discount in percentage:\n ");
    scanf("%f", &discount);
    discounted_price = price - (price*discount*0.01);
   if (discount >= 10 & discount<= 50) {
       
        float gst = discounted_price * 0.18;
        total_price = discounted_price + gst;
        printf("Discounted Price : %f\n", total_price);
    } else if(discount>= 50){
        float gst= discounted_price*0.02;
        
    
        total_price = discounted_price + gst;
        printf("Discounted Price: %f\n", total_price);
    }

    return 0;
}
