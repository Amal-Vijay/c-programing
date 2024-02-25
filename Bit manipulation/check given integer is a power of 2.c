#include <stdio.h>
int Power(int n) {
    return (n && !(n & (n - 1)));
}

int main() {
    int n;
    printf("Enter an integer: ");
    scanf("%d", &n);

    if (Power(n))
        printf("%d is a power of 2\n", n);
    else
        printf("%d is not a power of 2\n", n);

    return 0;
}
