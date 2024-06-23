#include <stdio.h>
#include <math.h>
int main()
{
    // Initialization of Variables
    double diameter, costPerSqInch, costperTopping, totalCost;
    double pi = 3.14;
    int numToppings;

    // Reading Input
    scanf("%lf", &diameter);
    scanf("%lf", &costPerSqInch);
    scanf("%d", &numToppings);
    scanf("%lf", &costperTopping);
    // Write code below to calculate the total cost and store the result in totalCost variable
    totalCost = (((pi * diameter * diameter) / 4) * costPerSqInch) + (numToppings * costperTopping);
    // Print the total cost
    printf("%.2lf", totalCost);
    return 0;
}