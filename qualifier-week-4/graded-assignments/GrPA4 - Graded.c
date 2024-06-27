#include <stdio.h>

int main() {
    float p, q;

    scanf("%f", &p);
    scanf("%f", &q);

    if (p == 0 && q == 0) {
        printf("Origin\n");
    } else if (p == 0) {
        printf("y-axis\n");
    } else if (q == 0) {
        printf("x-axis\n");
    } else {
         if (p > 0 && q > 0) {
            printf("First\n");
        } else if (p < 0 && q > 0) {
            printf("Second\n");
        } else if (p < 0 && q < 0) {
            printf("Third\n");
        } else {
            printf("Fourth\n");
        }
    }
    return 0;
}
