#include <stdio.h>

int main(void) {
    double x;
    double a;

    scanf("%lf", &x);

    a = x * 360.0 / (4.0 * 3.141592);

    printf("%f", a);

    return 0;
}