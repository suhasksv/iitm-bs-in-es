#include <stdio.h>
int main() {
    double x;
    scanf("%lf", &x);
    // Write solution code below
    double cfrac;
    double term = x + 1.0 / x;
    term = x + 1 / term;
    term = x + 1 / term;
    cfrac = x + 1 / term;
    printf("%.2lf",cfrac);
    return 0;
}
// Failed Public Test Case 3
// Will fix the logic soon :)