#include <stdio.h>
#include <math.h>

int main() {
    double radius, height, vol;
    double PI = 3.14;

    scanf("%lf", &radius);
    scanf("%lf", &height);

    vol = PI * pow(radius, 2) * height;

    printf("%.2lf", vol);
    return 0;
}