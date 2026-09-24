#include <stdio.h>

// Arithmetic functions
float add(float a, float b) {
    return a + b;
}

float subtract(float a, float b) {
    return a - b;
}

float multiply(float a, float b) {
    return a * b;
}

float divide(float a, float b) {
    if (b == 0)
        return 0;
    return a / b;
}

// Numerical functions
long long factorial(int n) {
    long long result = 1;

    for (int i = 1; i <= n; i++)
        result *= i;

    return result;
}

int isPrime(int n) {
    if (n <= 1)
        return 0;

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return 0;
    }

    return 1;
}

int maximum(int a, int b) {
    return (a > b) ? a : b;
}

// Swapping uses pointers to change original values
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int choice;
    float num1, num2;
    int n, a, b;

    do {
        printf("\n--- MENU ---\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Factorial\n");
        printf("6. Prime Checking\n");
        printf("7. Maximum of Two Numbers\n");
        printf("8. Swap Two Numbers\n");
        printf("9. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter two numbers: ");
                scanf("%f %f", &num1, &num2);
                printf("Sum = %.2f\n", add(num1, num2));
                break;

            case 2:
                printf("Enter two numbers: ");
                scanf("%f %f", &num1, &num2);
                printf("Difference = %.2f\n", subtract(num1, num2));
                break;

            case 3:
                printf("Enter two numbers: ");
                scanf("%f %f", &num1, &num2);
                printf("Product = %.2f\n", multiply(num1, num2));
                break;

            case 4:
                printf("Enter two numbers: ");
                scanf("%f %f", &num1, &num2);
                if (num2 == 0)
                    printf("Division by zero is not allowed.\n");
                else
                    printf("Quotient = %.2f\n", divide(num1, num2));
                break;

            case 5:
                printf("Enter a non-negative integer: ");
                scanf("%d", &n);
                if (n < 0)
                    printf("Factorial is not defined for negative numbers.\n");
                else
                    printf("Factorial of %d = %lld\n", n, factorial(n));
                break;

            case 6:
                printf("Enter an integer: ");
                scanf("%d", &n);
                if (isPrime(n))
                    printf("%d is a prime number.\n", n);
                else
                    printf("%d is not a prime number.\n", n);
                break;

            case 7:
                printf("Enter two integers: ");
                scanf("%d %d", &a, &b);
                printf("Maximum = %d\n", maximum(a, b));
                break;

            case 8:
                printf("Enter two integers: ");
                scanf("%d %d", &a, &b);
                printf("Before swapping: a = %d, b = %d\n", a, b);
                swap(&a, &b);
                printf("After swapping:  a = %d, b = %d\n", a, b);
                break;

            case 9:
                printf("Program ended.\n");
                break;

            default:
                printf("Invalid choice. Try again.\n");
        }

    } while (choice != 9);

    return 0;
}