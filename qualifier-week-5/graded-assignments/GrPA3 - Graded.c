#include <stdio.h>

int series_sum(int n) {
    if (n <= 0) {
        return 0;
    }

    int sum = 0;
    for (int i = 0; i <= n; i++) {
        sum += (i * (i + 1)) / 2;
    }
    return sum;
}

int main() {
    int n;
    scanf("%d",&n);
    printf("%d", series_sum(n));
    return 0;
}
