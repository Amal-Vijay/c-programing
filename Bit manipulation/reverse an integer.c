#include <stdio.h>
int Rev(int n)
{
    int rev = 0, i, count = sizeof(n)*2;  // Count total bits
    for (i = 0; i < count; i++)
    {
        rev <<= 1;                   // Left shift rev by 1
        rev |= (n & 1);              // Set the rightmost bit of n in rev
        n >>= 1;                    // Right shift n by 1
    }
    return rev;
}
int main()
{
    int num = 13;
    printf("Reversed bits of %u = %u\n", num, Rev(num));
}
