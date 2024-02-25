#include<stdio.h>
int main()
{
    int p,q,r,s;
    printf("Enter the values of each variable p,q,r,s - ");
    scanf("%d %d %d %d",&p,&q,&r,&s);
    if( s>0&&q>0&&r>0&&(p%2==0)&&q>r&&s>p&&r+s>p+q){
        printf("correct values ");
    }else{
    printf("wrong values ");
    }
}
