##include <stdio.h>

 //write code below
int sumNaturalNumbers(int n) {
    if (n == 1) {
        return 1;
    } else {
        return n + sumNaturalNumbers(n - 1);
    }
}

 int main() {
     int N;
     scanf("%d",&N);
     printf("%d",sumNaturalNumbers(N));
     return 0;
 }
