// Prefix Code
#include <stdio.h>
int main() {
    double radius;
    scanf("%lf", &radius);
    // Write solution code below
    double volume;
    volume = (4.0 / 3.0) * 3.14 * radius * radius * radius;
    printf("%.2lf", volume);
    return 0;
}
