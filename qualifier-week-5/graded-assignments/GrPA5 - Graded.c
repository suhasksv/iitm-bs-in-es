#include <stdio.h>

// Write code below
void rev_print(int n) {
  if (n > 0) {
    int num;
    scanf("%d", &num);
    rev_print(n - 1);
    printf("%d\n", num);
  }
}

int main() {
    int n;
    scanf("%d", &n);
    rev_print(n);
}