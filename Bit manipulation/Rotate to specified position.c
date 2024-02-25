#include <stdio.h>

int RL(int num, int n)
{
    int s = sizeof(int) * 8;
    n %= s;         // Handle excessive rotation

    int mask = (1 << n) - 1;   //mask to extract the bits to rotate
    int rotated_bits = (num & mask) << (s - n); // Extract the bits to rotate
    num &= ~mask;
    return num | rotated_bits; // Combine the rotated bits with the original number

}

int main()
{
    int num;
    int n;

    printf("Enter an integer: ");
    scanf("%u", &num);

    printf("Enter the number of positions to rotate left: ");
    scanf("%d", &n);

    printf("Original number: %u\n", num);
    printf("Rotated number: %u\n", RL(num, n));

    return 0;
}
