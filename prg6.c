#include <stdio.h>

// double calculateSeriesSum(double x, int terms) {
//     double sum = 1.0; // initialize sum with the first term (1)
//     double term = 1.0; // initialize the current term with the first term (1)

//     for (int i = 1; i < terms; i++) {
//         term *= x / i; // calculate the current term using the previous term and x/i
//         sum += term;
//     }

//     return sum;
// }

int main() {
    double x;
    int terms;

    printf("Enter the value of x: ");
    scanf("%lf", &x);

    printf("Enter the number of terms: ");
    scanf("%d", &terms);
    double sum = 1.0; 
    double term = 1.0;

    for (int i = 1; i < terms; i++) {
        term *= x / i; 
        sum += term;
    }

    printf("Sum of the series: %.4lf\n", sum);

    return 0;
}


