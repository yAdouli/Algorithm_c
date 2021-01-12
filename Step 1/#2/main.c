#include <stdio.h>

int main()

{
    int a,b;
    printf("please enter value of a :");
    scanf("%d", &a);
    printf("please enter value of b :");
    scanf("%d", &b);

    // Display results
     
     printf("%d + %d = %d\n", a,b , a+b);
     printf("%d - %d = %d\n", a,b , a-b);
     printf("%d * %d = %d\n", a,b , a*b);
     printf("%d / %d = %d\n", a,b , a/b);
     printf("%d mod %d = %d\n", a,b ,a%b);
   return 0;
}