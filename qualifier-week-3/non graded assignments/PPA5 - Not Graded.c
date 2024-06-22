#include <stdio.h>
int main() {
    int a,b;
	scanf("%d%d", &a,&b);
    // Write solution code below
    a += b;
    b = a - b;
    a -= b;

printf("%d %d",a,b);
    return 0;
}
