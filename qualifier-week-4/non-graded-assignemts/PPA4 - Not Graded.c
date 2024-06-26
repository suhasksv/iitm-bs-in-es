#include <stdio.h>

int main() {
    int employee_id[5];
    int i;
    for (i = 0; i < 5; i++) {
        scanf("%d", &employee_id[i]);
    }

    for (i = 0; i < 5; i++) {
        if ((employee_id[i] + employee_id[(i + 1) % 5]) % 2 != 0) {
            printf("NO");
            return 1;
        }
    }
    printf("YES");
    return 0;
}
