#include <stdio.h>
sum_2number() 
{
    int num1, num2, sum;
//Enter the first number
    printf("Enter the first number: ");
    //Read the first number
    scanf("%d", &num1);
//Enter the second number
    printf("Enter the second number: ");
    //Read the second number
    scanf("%d", &num2);

    sum = num1 + num2;

    printf("The sum of %d and %d is %d\n", num1, num2, sum);

   // return 0;
}
