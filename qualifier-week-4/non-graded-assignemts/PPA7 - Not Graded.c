#include <stdio.h>

int main() {
    double per_amt, dis_amt, final_amt;

    scanf("%lf", &per_amt);

    if (per_amt < 200.00) {
        dis_amt = 0.00;
    } else if (per_amt <= 500.00) {
        dis_amt = 0.10;
    } else {
        dis_amt = 0.20;
    }

    final_amt = per_amt * (1 - dis_amt);

    printf("%.2lf", final_amt);

    return 0;
}
