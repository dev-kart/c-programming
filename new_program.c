#include <stdio.h>
#include <math.h>

double power(double x, double y) {
    return pow(x, y);
}

int main() {
    double x, y;
    printf("Enter base number: ");
    scanf("%lf", &x);
    printf("Enter exponent: ");
    scanf("%lf", &y);

    printf("%.2lf to the power of %.2lf is %.2lf\n", x, y, power(x, y));
    return 0;
}
double power(double x, double y) {
    if (y == 0)
        return 1;
    else if (y > 0)
        return x * power(x, y - 1);
    else
        return 1 / power(x, -y);
}