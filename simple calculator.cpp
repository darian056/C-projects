#include <stdio.h>
#include <math.h>

int main() {
    char op; 
    int num1, num2;
    float result;

    // Input values into initialized variables
    printf("First Value: ");
    scanf("%d", &num1);
    
    printf("Second Value: ");
    scanf("%d", &num2);
    
    printf(" +: addition \n -: subtraction \n *: multiplication \n /: division \n %%: modulus \nInput an Operator: ");
    scanf(" %c", &op);

    switch (op) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                result = (float)num1 / num2;  // Typecasting to float for division
            } else {
                printf("Error: Division by zero is not allowed.\n");
                return 1;  // Exit with error
            }
            break;
        case '%':
            if (num2 != 0) {
                result = num1 % num2;  // Modulus for integers
            } else {
                printf("Error: Modulus by zero is not allowed.\n");
                return 1;  // Exit with error
            }
            break;
        default:
            printf("Invalid operator\n");
            return 1;  // Exit with error
    }
    
    printf("Result: %.2f\n", result);  // Print the result with two decimal places
    return 0;
}

