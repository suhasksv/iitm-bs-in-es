#include <stdio.h>

int series_sum(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        int term_sum = 0;
        for (int j = 1; j <= i; j++) {
            term_sum += j;
        }
        sum += term_sum;
    }
    return sum;
}

int main() {
    int n;

    scanf("%d", &n);

    int sum = series_sum(n);
    printf("%d\n", sum);

    return 0;
}
