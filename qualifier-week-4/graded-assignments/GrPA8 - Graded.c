#include <stdio.h>

int main() {
    float price, total = 0.0;
    char choice;

    do {
        scanf("%f", &price);

        total += price;

        scanf(" %c", &choice);
    } while (choice == 'y' || choice == 'Y');

    printf("%.2f\n", total);

    return 0;
}
