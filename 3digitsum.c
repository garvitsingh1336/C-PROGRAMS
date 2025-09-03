#include <stdio.h>

void main()
{
    int num ,a,sum=0;                       // variable declaration

    printf("Enter the 3 digit number : ");
    scanf("%d",&num);                       // input number

    a = num % 10;                           // done to separate the unit place of the number
    sum = sum + a ;                         // adds seperated to sum
    num = num/10;                           // remove it unit place

    // For 3 digit number repeat this step for 3 times.

    a = num % 10;
    sum = sum + a ;
    num = num/10;

    a = num % 10;
    sum = sum + a ;
    num = num/10;

    printf("The sum of 3 digit number is : %d",sum); // output
}