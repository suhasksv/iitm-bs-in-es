#include <stdio.h>

int main()  {
    int age, gender;
    double weight, height, aF, bmr;

    scanf("%d", &age);
    scanf("%d", &gender);
    scanf("%lf", &weight);
    scanf("%lf", &height);
    scanf("%lf", &aF);

    if (gender == 1) {
        bmr = 88.362 + (13.397 * weight) + (4.799 * height) - (5.677 * age);
    } else if (gender == 2) {
        bmr = 447.593 + (9.247 * weight) + (3.098 * height) - (4.330 * age);
    } else {
        printf("Invalid Input");
    }

    printf("%.2lf", bmr * aF);
    return 0;
}
