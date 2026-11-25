#include <stdio.h>

#define MAX_SIZE 100

int main(void) {
    int array[MAX_SIZE];
    int n, i;
    int sum = 0, max, min;
    float average;

    printf("Enter number of elements (1-%d): ", MAX_SIZE);
    scanf("%d", &n);

    if (n < 1 || n > MAX_SIZE) {
        printf("Invalid array size.\n");
        return 1;
    }

    printf("Enter %d elements:\n", n);

    for (i = 0; i < n; i++) {
        scanf("%d", &array[i]);
        sum += array[i];
    }

    max = min = array[0];

    for (i = 1; i < n; i++) {
        if (array[i] > max) {
            max = array[i];
        }

        if (array[i] < min) {
            min = array[i];
        }
    }

    average = (float)sum / n;

    printf("\nSum = %d\n", sum);
    printf("Average = %.2f\n", average);
    printf("Maximum = %d\n", max);
    printf("Minimum = %d\n", min);

    /* Additional operation: array reversal */
    printf("Reversed array: ");
    for (i = n - 1; i >= 0; i--) {
        printf("%d ", array[i]);
    }

    printf("\n");
    return 0;
}