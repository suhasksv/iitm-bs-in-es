#include <stdio.h>

int main() {
    double weight;
    int zone;

    scanf("%lf", &weight);
    scanf("%d", &zone);

    if (weight < 0 || zone < 1 || zone > 7) {
        printf("Invalid Input\n");
        return 1;
    }

    double cost_per_kg;
    switch (zone) {
        case 1:
            cost_per_kg = 5.0;
            break;
        case 2:
            cost_per_kg = 7.0;
            break;
        case 3:
            cost_per_kg = 10.0;
            break;
        case 4:
            cost_per_kg = 12.0;
            break;
        case 5:
            cost_per_kg = 16.0;
            break;
        case 6:
            cost_per_kg = 17.0;
            break;
        case 7:
            cost_per_kg = 19.0;
            break;
    }

    double total_cost = weight * cost_per_kg;
    printf("%.2lf\n", total_cost);

    return 0;
}
