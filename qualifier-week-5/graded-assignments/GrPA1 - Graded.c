#include <stdio.h>

// Write code below
int greatest(int a, int b, int c) {
    if (a >= b) {
        if (a >= c) {
            return a;
        } else {
            return c;
        }
    } else {
        if (b >= c) {
            return b;
        } else {
            return c;
        }
    }
}

int main() {
    int a, b, c, d;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    d = greatest(a, b, c);
    printf("%d", d);

    return 0;
}