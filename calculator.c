#include <stdio.h>

int main()
 {
    double num1, num2;
    char op;
    int success;

    printf("Enter first number:\n ");
    success = scanf("%lf", &num1);
    if (success != 1)
     {
        printf("Invalid input. Program exited\n");
        return 1;
    }

    printf("Enter operator (+, -, *, /, %%):\n ");
    scanf(" %c", &op);

    printf("Enter second number:\n ");
    success = scanf("%lf", &num2);
    if (success != 1)
     {
        printf("Invalid input. Program exited.\n");
        return 1;
    }

    switch (op) 
    {
        case '+':
            printf("Result: %.2lf\n", num1 + num2);
            break;
        case '-':
            printf("Result: %.2lf\n", num1 - num2);
            break;
        case '*':
            printf("Result: %.2lf\n", num1 * num2);
            break;
        case '/':
            if (num2 == 0)
                printf("Error: Division by zero is not allowed\n");
            else
                printf("Result: %.2lf\n", num1 / num2);
            break;
        case '%':
            if ((int)num2 == 0)
                printf("Error: Modulo by zero is not allowed.\n");
            else
                printf("Result: %d\n", (int)num1 % (int)num2);
            break;
        default:
            printf("Error: Invalid operator.\n");
    }

    return 0;
}
