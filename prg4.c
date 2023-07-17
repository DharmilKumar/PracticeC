#include <stdio.h>

double calculateSeriesSum(double x, int numTerms) {
    double sum = 1.0; // Initialize the sum with the first term
    double term = 1.0; // Initialize the first term

    int i;
    int sign = -1; // Alternate sign between terms

    for (i = 1; i < numTerms; i++) {
        term *= (x * x) / ((2 * i) * (2 * i + 1));
        sum += sign * term;
        sign *= -1; // Change the sign for the next term
    }

    return sum;
}

int main() {
    double x;
    int numTerms;

    printf("Input the Value of x: ");
    scanf("%lf", &x);

    printf("Input the number of terms: ");
    scanf("%d", &numTerms);

    double sum = calculateSeriesSum(x, numTerms);

    printf("The sum = %.6lf\n", sum);
    printf("Number of terms = %d\n", numTerms);
    printf("Value of x = %.6lf\n", x);

    return 0;
}
