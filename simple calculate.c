/*beecrowd | 1010
Simple Calculate
Adapted by Neilor Tonin, URI  Brazil

Timelimit: 1
In this problem, the task is to read a code of a product 1, the number of units of product 1, the price for one unit of product 1, the code of a product 2, the number of units of product 2 and the price for one unit of product 2. After this, calculate and show the amount to be paid.

Input
The input file contains two lines of data. In each line there will be 3 values: two integers and a floating value with 2 digits after the decimal point.

Output
The output file must be a message like the following example where "Valor a pagar" means Value to Pay. Remember the space after ":" and after "R$" symbol. The value must be presented with 2 digits after the point.
 */
 #include<stdio.h>

int main(){



    int product1_code, product1_number, product2_code, product2_number;

    float product1_price, product2_price, product1_paid, product2_paid, all_paid;

    scanf("%d %d %f", &product1_code, &product1_number, &product1_price);

    scanf("%d %d %f", &product2_code, &product2_number, &product2_price);



    product1_paid = product1_number * product1_price;

    product2_paid = product2_number * product2_price;

    all_paid = product1_paid + product2_paid ;



    printf("VALOR A PAGAR: R$ %.2f\n", all_paid);
return 0;
}
