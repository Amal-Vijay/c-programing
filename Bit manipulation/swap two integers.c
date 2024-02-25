#include <stdio.h>
void swap_integers(int *a, int *b)
{
    *a ^= *b;     // XOR to calculate the bit differences
    *b ^= *a;
    *a ^= *b;
}

int main()
{
    int num1, num2;

    printf("Enter two integers to swap: ");
    scanf("%d %d", &num1, &num2);

    printf("Before swapping: num1 = %d, num2 = %d\n", num1, num2);

    swap_integers(&num1, &num2);

    printf("After swapping: num1 = %d, num2 = %d\n", num1, num2);
}
