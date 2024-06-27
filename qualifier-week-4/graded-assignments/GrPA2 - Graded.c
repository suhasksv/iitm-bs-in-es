#include <stdio.h>
#include <math.h>

int main() {
    int num;

    scanf("%d", &num);

    if (num <= 1) {
        printf("%d is not a prime number\n", num);
    } else {
        int limit = sqrt(num);

        int is_prime = 1;

        for (int i = 2; i <= limit; ++i) {
            if (num % i == 0) {
                is_prime = 0;
                break;
            }
        }
        printf("%d %s a prime number\n", num, is_prime ? "is" : "is not");
    }

    return 0;
}
