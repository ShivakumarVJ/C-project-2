#include <stdio.h>

biggest3()
{
    int a, b, c;
    // Ask user to enter the three numbers
    printf("Enter three numbers: ");
    // Read three numbers from the user
        scanf("%d %d %d", &a, &b, &c);
    if (a >= b && a >= c) {
        printf("%d is the biggest number", a);
    } else if (b >= a && b >= c) {
        printf("%d is the biggest number", b);
    } else {
        printf("%d is the biggest number", c);
    }
   // return 0;
}
