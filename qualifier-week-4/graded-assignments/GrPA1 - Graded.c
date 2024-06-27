#include <stdio.h>

int main() {
    int num, reversed = 0, remainder, original;

    scanf("%d", &num);

    original = num;

    while (num != 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }

    if (original == reversed) {
        printf("%d is a palindrome number", original);
    } else {
        printf("%d, is not a palindrome number", original);
    }
    return 0;
}
