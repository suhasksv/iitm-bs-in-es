#include <stdio.h>

int main() {
    int n1, n2;

    scanf("%d %d", &n1, &n2);

    if (n1 <= 2 || n2 <= 2) {
        if (n1 != n2) {
            printf("Coprime");
        } else {
            printf("Not Coprime");
        }
    }

    while (n2 != 0) {
        int reminder = n1 % n2;
        n1 = n2;
        n2 = reminder;
    }

    if (n1 == 1) {
        printf("Coprime");
    } else {
        printf("Not Coprime");
    }
}
