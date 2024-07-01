#include <stdio.h>

//Write Code below
int is_prime(int num) {
    if (num <= 1) {
        return 0;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}

int prime_sum(int p, int q) {
    if (p > q) {
        return 0;
    }

    int sum = 0;
    for (int i = p; i <= q; i++) {
        if (is_prime(i)) {
            sum += i;
        }
    }
    return sum;
}

int main()  {
    int p,q;
    scanf("%d",&p);
    scanf("%d",&q);
    printf("%d",prime_sum(p,q));
    return 0;
}