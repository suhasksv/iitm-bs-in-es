#include <stdio.h>

// Write code below
long fact (int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * fact(n - 1);
    }
}

int main() {
    int a;
    long int result;
    scanf("%d", &a);

    result = fact(a);
    printf("%ld", result);

    return 0;
}
