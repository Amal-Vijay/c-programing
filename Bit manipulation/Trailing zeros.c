#include <stdio.h>
int trailing(int num)
{
    int count = 0;
    while (num && !(num & 1))
    {
        num >>= 1;
        count++;
    }
    return count;
}

int main()
{
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    int zeros = trailing(num);
    printf("Number of trailing zeros: %d\n", zeros);

    return 0;
}
