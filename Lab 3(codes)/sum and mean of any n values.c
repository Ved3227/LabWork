#include <stdio.h>

int main() {
    int n, i;
    float num, sum = 0.0, mean;

    printf("Enter how many numbers you want: ");
    scanf("%d", &n);

    printf("Enter %d numbers:\n", n);

    for(i = 1; i <= n; i++) {
        printf("Number %d: ", i);
        scanf("%f", &num);
        sum += num;
    }

    mean = sum / n;

    printf("\nSum = %.2f", sum);
    printf("\nMean = %.2f\n", mean);

    return 0;
}
