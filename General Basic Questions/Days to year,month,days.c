#include<stdio.h>
int main()
{
    int d,Y,M,D;
    printf("Enter the total days - ");
    scanf("%d",&d);
    Y = d/365;
    M = (d%365)/30;
    D = (d%365)%30;
    printf("   %d Years\n   %d Months\n   %d Days",Y,M,D);
    return 0;
}
