#include<stdio.h>
#include<math.h>
int main()
{
    int a,i,e;
    printf("Enter the range 1 - ");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        if(i%2==0)
        {
            e = pow(i,2);
            printf(" %d",e);
        }
    }
}
