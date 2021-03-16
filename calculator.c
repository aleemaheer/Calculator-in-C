// Making a calculator 

// A simple calculator

# include <stdio.h>
int main(void)
{
    int num1;
    int num2;
    char operator;

    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the operator: ");
    scanf(" %c", &operator);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    if (operator == '+') 
    {
        printf("Answer: %d", num1 + num2);
    }
    else if (operator == '-')
    {
        printf("Answer: %d", num1 - num2);
    }
    else if (operator == '*')
    {
        printf("Answer: %d", num1 * num2);
    }
    else if (operator == '/')
    {
        printf("Answer: %d", num1 / num2);
    }
}