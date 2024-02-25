#include<stdio.h>
int main()
{
    int s,H,M,S;
    printf("Enter the time in seconds - ");
    scanf("%d",&s);
    H = s/3600;
    M = (s%3600)/60;
    S = (s%3600)%60;
    printf(" Total time in hours - %d hours\n The Remaining minutes - %d minutes\n Remaining seconds - %d seconds",H,M,S);
    return 0;
}
