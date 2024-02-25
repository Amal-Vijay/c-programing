#include<stdio.h>
int main()
{
int i;
printf("Enter an integer to check - ");
    scanf("%d",&i);
    if (i < 0 || i > 80) {
        printf("Error: Number is either negative or greater than 80.\n");
    } else {
        printf("Number is within the specified range.\n");
    }
}

