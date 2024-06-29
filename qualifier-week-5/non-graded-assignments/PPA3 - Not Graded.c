#include <stdio.h>

//Write code below
#include <math.h>

int is_prime(int n) {
    if (n <= 1) {
        return 0;
    }
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int prime_product(int m) {
    if (m <= 1) {
        return 0;
    }

    if (is_prime(m)) {
        return 0;
    }

    for (int i = 2; i <= sqrt(m); i++) {
        if (m % i == 0) {
            if (is_prime(i) && is_prime(m / i)) {
                return 1;
            }
        }
    }
    return 0;
}

int main() {
    int m;
    scanf("%d",&m);
    if (prime_product(m)==1)
    {
        printf("%d is a prime product",m);
    }
    else
    {
        printf("%d is not a prime product",m);
    }
    return 0;
}