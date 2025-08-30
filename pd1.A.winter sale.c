#include <stdio.h>

int main() {
    double X, P;
    scanf("%lf %lf", &X, &P);

    double original = (P * 100.0) / (100.0 - X);
    printf("%.2f\n", original);

    return 0;
}

