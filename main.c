#include <stdio.h>

int main()
{
    
    // Instantiation of variables
    char firstName[16];
    char lastName[10];
    int age = 0;
    char sex[10];
    int numberPhone = 0;

    // Questioning phase
    printf("Please, enter your name.\n");
    scanf("%s", &firstName);
    printf("Enter your lastName.\n");
    scanf("%s" , &lastName);
    printf("Enter your age.\n");
    scanf("%d", &age);
    printf("Male or Female.\n");
    scanf("%s" , &sex);
    printf("Enter your numberPhone.\n");
    scanf("%d" , &numberPhone);

    // Display results
    printf("Actually, your name is %s,", firstName);
    printf(" and your lastName is %s," , lastName);
    printf(" your age is %d,", age);
    printf(" you're a %s,", sex);
    printf(" at last your number is 0%d.", numberPhone);

    // End
    return 0;
}