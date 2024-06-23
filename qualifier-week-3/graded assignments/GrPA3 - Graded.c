#include <stdio.h>
int main() {
    int num;
    scanf("%d", &num);
    //Write solution code below
    int sum;
    sum = (num / 1000) + ((num / 100) % 10) + ((num / 10) % 10) + (num % 10);
    printf("%d", sum);
    return 0;
}