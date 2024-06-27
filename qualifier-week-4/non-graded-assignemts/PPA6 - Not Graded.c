#include <stdio.h>
#include <math.h>

int main() {
    double P, r;
    int t, n;
    scanf("%lf", &P);
    scanf("%lf", &r);

    r /= 100;

    scanf("%d", &t);
    scanf("%d", &n);

    for (int i = 1; i <= t: i++) {
        double A = P * pow(1 + r / n, n * i);
        printf("%.2f\n", A);
    }
    return 0;
}
