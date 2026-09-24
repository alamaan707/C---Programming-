#include <stdio.h>

int main()
{
    int number, original, temp;
    int digit, reverse = 0, sum = 0;
    int isPrime = 1;

    printf("Enter an integer: ");
    scanf("%d", &number);

    original = number;
    temp = number;

    // Calculate reverse and sum of digits
    while (temp != 0)
    {
        digit = temp % 10;

        reverse = reverse * 10 + digit;
        sum = sum + digit;

        temp = temp / 10;
    }

    // Check palindrome
    if (original == reverse)
        printf("Palindrome: Yes\n");
    else
        printf("Palindrome: No\n");

    // Check prime
    if (original <= 1)
    {
        isPrime = 0;
    }
    else
    {
        for (int i = 2; i * i <= original; i++)
        {
            if (original % i == 0)
            {
                isPrime = 0;
                break;
            }
        }
    }

    // Display results
    printf("Reverse of %d = %d\n", original, reverse);
    printf("Sum of digits = %d\n", sum);

    if (isPrime)
        printf("Prime: Yes\n");
    else
        printf("Prime: No\n");

    return 0;
}