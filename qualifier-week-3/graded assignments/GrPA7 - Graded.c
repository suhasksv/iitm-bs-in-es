#include <stdio.h>
int main() {
    // Initialize required Variables
    double weight, rate, cost;
    // Read Inputs: weight of the package (in kilograms) and shipping rate
    scanf("%lf", &weight);
    scanf("%lf", &rate);
    // Calculate the shipping cost
    cost = weight * rate;
    // Print the shipping cost as double upto two decimal point
    printf("%.2lf\n", cost);
    return 0;
}