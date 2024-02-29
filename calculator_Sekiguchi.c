#include <stdio.h>

int main()
{
    float num1, num2; // Variables for the operands
    char operator;    // Variable for the operator

    // Calculator introduction
    printf("🐾 Welcome to your adorable calculator! 🐾\n");
    printf("Enter an operation (+, -, *, /) followed by two numbers: ");
    scanf(" %c %f %f", &operator, & num1, &num2); // Read the operation and numbers

    // Perform calculation based on the operator
    printf("Result: ");
    switch (operator)
    {
    case '+':
        printf("%.2f\n", num1 + num2); // Addition
        break;
    case '-':
        printf("%.2f\n", num1 - num2); // Subtraction
        break;
    case '*':
        printf("%.2f\n", num1 * num2); // Multiplication
        break;
    case '/':
        if (num2 == 0)
            // Handling division by zero
            printf("Oops! We can't divide by zero, let's try another number! 🌈\n");
        else
            printf("%.2f\n", num1 / num2); // Division
        break;
    default:
        // In case of an unknown operation
        printf("Hmm, seems like we've entered an unknown operation. Let's try again! 🌟\n");
    }

    return 0;
}
