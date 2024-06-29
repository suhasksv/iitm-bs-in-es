#include <stdio.h>

// Write code below
int GCD(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    printf("%d",GCD(a,b));
    return 0;
}

/* Shouldn't it Work ? But not Working

#include <stdio.h>

int GCD(int a, int b) {
  if (b == 0) {
    return a;
  } else {
    return GCD(b, a % b);
  }
}

int main() {
  int n1, n2;

  scanf("%d", n1);
  scanf("%d", n2);

  if (n1 <= 0 || n2 <= 0) {
    printf("Error!: Failure");
    return 1;
  }

  int gcd = GCD(n1, n2);
  printf("%d\n", gcd);

  return 0;
}
