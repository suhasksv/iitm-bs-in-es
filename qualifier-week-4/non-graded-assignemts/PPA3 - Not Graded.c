#include <stdio.h>

float piece_func(float x) {
    if (x > 0 && x < 10) {
        return x + 2;
    } else if (x <= 10) {
        return x * x + 2;
    } else {
        return 0;
    }
}

float main() {
    float x, result;
    scanf("%f", &x);

    result = piece_func(x);

    printf("%.2f", result);

    return 0;
}
