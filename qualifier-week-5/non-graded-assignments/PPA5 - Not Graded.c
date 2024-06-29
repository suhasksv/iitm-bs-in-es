#include <stdio.h>

// Write code below
int nth_digit(int num, int n) {
    if (n <= 0) {
        return -1;
    }

    for (int i = 1; i < n; i++) {
        num /= 10;
    }

    if (num == 0) {
        return -1;
    }

    return num % 10;
}
int main(){
    int num, n;
    scanf("%d %d", &num, &n);
    printf("%d", nth_digit(num, n));
}