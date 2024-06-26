#include <stdio.h>

int main() {
    int n, fact = 1;
    scanf("%d", &n);

    if (n < 0) {
        printf("Error");
        return 1;
    }
    for (int i = 1; i <= n; ++i) {
        fact *= i;
    }

    printf("%d\n", fact);
    return 0;
}

// Let's try to cover more cases in a different approach

/*
#include <stdio.h>

unsigned long long factorial(int n) {
    if (n < 0) {
        printf("Error: Failure");
        return 1;
    } else if (n == 0) {
        return 1;
    } else {
        unsigned long long result = 1;
        for (int i = 1; i <= n; ++i) {
            result *= i;
        }
        return result;
    }
}

int main() {
    int n;

    scanf("%d", &n);

    unsigned long long fact = factorial(n);

    if (fact != 1) {
        printf("%llu\n", fact);
    }
    return 0;
}
*/