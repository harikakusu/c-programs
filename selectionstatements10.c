#include <stdio.h>

int main()
{
    float a, b;
    char op;

    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &op);

    if (op == '+')
        printf("Result = %.2f", a + b);
    else if (op == '-')
        printf("Result = %.2f", a - b);
    else if (op == '*')
        printf("Result = %.2f", a * b);
    else if (op == '/')
    {
        if (b != 0)
            printf("Result = %.2f", a / b);
        else
            printf("Division by zero is not possible");
    }
    else
        printf("Invalid operator");

    return 0;
}