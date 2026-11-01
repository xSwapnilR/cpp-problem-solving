#include <stdio.h>

int main() {
    char choice;
    double num1, num2, result;

    do {
        // Display operational menu
        
        printf(" + for Addition\n");
        printf(" - for Subtraction\n");
        printf(" * for Multiplication\n");
        printf(" / for Division\n");
        
        scanf(" %c", &choice); // Leading space avoids whitespace character trapping

        // Accept input numbers only if choice is not exit ('0')
        if (choice != '0') {
            // Validate valid operation inputs before asking numbers
            if (choice == '+' || choice == '-' || choice == '*' || choice == '/') {
                printf("Enter two numbers: ");
                scanf("%lf %lf", &num1, &num2);
            }
        }

        // Switch case to execute operation based on choice
        switch (choice) {
            case '+':
                result = num1 + num2;
                printf("Result = %.2lf\n", result);
                break;

            case '-':
                result = num1 - num2;
                printf("Result = %.2lf\n", result);
                break;

            case '*':
                result = num1 * num2;
                printf("Result = %.2lf\n", result);
                break;

            case '/':
                if (num2 != 0) {
                    result = num1 / num2;
                    printf("Result = %.2lf\n", result);
                } else {
                    printf("Error: Division by zero is not allowed.\n");
                }
                break;

            case '0':
                printf("Exiting calculator program. Goodbye!\n");
                break;

            default:
                printf("Invalid choice! Please select a valid option.\n");
        }

    } while (choice != '0'); // Exit-controlled loop check

    return 0;