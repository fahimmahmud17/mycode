/*beecrowd | 1006
Average 2
Adapted by Neilor Tonin, URI  Brazil

Timelimit: 1
Read three values (variables A, B and C), which are the three student's grades. Then, calculate the average, considering that grade A has weight 2, grade B has weight 3 and the grade C has weight 5. Consider that each grade can go from 0 to 10.0, always with one decimal place.

Input
The input file contains 3 values of floating points (double) with one digit after the decimal point.

Output
Print the message "MEDIA"(average in Portuguese) and the student's average according to the following example, with a blank space before and after the equal signal.
*/
#include<stdio.h>

int main()
{
float a,b,c,x;
scanf("%f",&a);
scanf("%f",&b);
scanf("%f",&c);

x=(a*2+b*3+c*5)/(2+3+5);
printf("MEDIA = %.1f\n",x);


    return 0;
}
