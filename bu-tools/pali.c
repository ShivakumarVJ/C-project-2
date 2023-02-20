#include <stdio.h>
#include <string.h>

palindrom()
{
    char str[100];
    int i, len;
    int is_palindrome = 1; // assume it is a palindrome by default
   //Enter the string 
    printf("Enter a string: ");
    //Read the string
    scanf("%s", str);
    
    len = strlen(str);
    
    for (i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            is_palindrome = 0;
            break;
        }
    }
    
    if (is_palindrome) {
        printf("%s is a palindrome\n", str);
    } else {
        printf("%s is not a palindrome\n", str);
    }
    
   // return 0;
}
