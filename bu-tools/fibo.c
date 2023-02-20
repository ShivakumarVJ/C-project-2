#include <stdio.h>

fibonacci()
{
   int n, i, t1 = 0, t2 = 1, nextTerm;
//Enter the number of terms
   printf("Enter the number of terms: ");
   //read the terms
   scanf("%d", &n);

   printf("Fibonacci Series: ");

   for (i = 1; i <= n; ++i) {
      printf("%d, ", t1);
      nextTerm = t1 + t2;
      t1 = t2;
      t2 = nextTerm;
   }

   //return 0;
}
