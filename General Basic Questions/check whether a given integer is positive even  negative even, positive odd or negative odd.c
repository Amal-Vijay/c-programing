#include<stdio.h>
int main()
{
    int a;
    printf("Enter the value -> ");
    scanf("%d",&a);
    if(a>0 && a%2==0)
    {
        printf("+ve Even");
    }
    else if(a<0 && a%2==0)
    {
        printf("-ve Even");
    }
    else if(a>0 && a%2!=0)
    {
        printf("+ve Odd");
    }
    else if(a<0 && a%2!=0)
    {
        printf("-ve Odd");
    }
    else if(a==0)
    {
        printf("Even");
    }
}
