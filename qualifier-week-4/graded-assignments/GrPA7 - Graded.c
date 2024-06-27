#include <stdio.h>

int main() {
    int n,  total_cookies = 0, daily_sales;

    scanf("%d", &n);

    if (n <= 0) {
        return 1;
    }

    for (int i = 0; i < n; ++i) {
        scanf("%d", &daily_sales);
        total_cookies += daily_sales;
    }
    printf("%d", total_cookies);
    return 0;
}
