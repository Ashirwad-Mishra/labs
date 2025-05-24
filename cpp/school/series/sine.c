#include <stdio.h>

int main() {
    double a;
    printf("Enter the angle: ");
    scanf("%lf", &a);

    double A = a * (3.14157 / 180.0);
    double sine = A;
    double t = A;
    int sign = -1;

    for (int i = 1; i < 10; ++i) {
        int power = 2 * i + 1;
        t *= (A * A) / (power * (power - 1));
        sine += sign * t;
        sign *= -1;
    }

    printf("The sine ratio = %lf\n", sine);

    return 0;
}
