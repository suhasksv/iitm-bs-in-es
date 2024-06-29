#include <stdio.h>

//Write code below
long long nth_fibonacci(int i) {
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        return nth_fibonacci(n - 1) + nth_fibonacci()
    }
}

int main() {
    int n;
    scanf("%d",&n);
    printf("%d",nth_fibonacci(n));
    return 0;
}