#include<stdio.h>
int main()
{
    int d,Y,W,D;
    printf("Enter the number of days - ");
    scanf("%d",&d);
    Y = d/365;
    W = (d%365)/7;
    D = (d%365)%7;
    printf(" Total no. of Years - %d years\n The Remaining Weeks - %d weeks\n Remaining days - %d days",Y,W,D);
    return 0;
}
