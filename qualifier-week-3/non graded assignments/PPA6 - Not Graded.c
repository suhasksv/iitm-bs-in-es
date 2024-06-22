//Prefix Code(Visible)
#include <stdio.h>
#include <math.h>
int main()
{
    //Initialization of variables
    double principal, annualRate, monthlyRate, monthlyPayment;
    int numMonths;

    //Reading Inputs
    scanf("%lf", &principal);
    scanf("%lf", &annualRate);
    scanf("%d", &numMonths);
    // Write code below to calculate the monthly payment and store the result in monthlyPayment variable
    monthlyRate = (annualRate / 100 ) / 12;

    monthlyPayment = (principal * monthlyRate * pow(1 + monthlyRate, numMonths)) / (pow(1 + monthlyRate, numMonths) - 1);
   //Printing the output
    printf("%.0lf", monthlyPayment);
    return 0;
}