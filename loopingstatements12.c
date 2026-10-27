
#include <stdio.h>
int main()
{
float a, b, result;
char op;
printf("Enter two numbers: ");
scanf("%f%f", &a, &b);
printf("Enter an operator (+, -, *, /): ");
scanf(" %c", &op);
switch(op)
{
case '+':
result = a + b;
printf("Result = %.2f", result);
break;
case '-':
result = a - b;
printf("Result = %.2f", result);
break;
case '*':
result = a * b;
printf("Result = %.2f", result);
break;
case '/':
if(b != 0)
{
result = a / b;
printf("Result = %.2f", result);
}
else
printf("Division by zero is not possible");
break;
default:
printf("Invalid operator");
}
return 0;
}
