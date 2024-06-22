#include <stdio.h>
#include <math.h>
int main() {
    double principal, rate, time;
    scanf("%lf%lf%lf", &principal,&rate,&time);
    // Write solution code below
    double simpleInterest;
    simpleInterest = (principal * rate * time) / 100;
    printf("%.2lf", simpleInterest);
    return 0;
}
