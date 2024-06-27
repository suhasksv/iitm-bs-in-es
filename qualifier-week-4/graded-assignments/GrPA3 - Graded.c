#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);

    if (a <= 0 || b <= 0 || c <= 0) {
        return 1;
    }
    int max_side = fmax(a, fmax(b, c));

    if (max_side == a) {
        if (pow(b, 2) + pow(c, 2) == pow(max_side, 2)) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    } else if (max_side == b) {
            if (pow(a, 2) + pow(c, 2) == pow(max_side, 2)) {
                printf("YES\n");
            } else {
                printf("NO\n");
            }
    } else {
        if (pow(a, 2) + pow(b, 2) == pow(max_side, 2)) {
                printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
}
