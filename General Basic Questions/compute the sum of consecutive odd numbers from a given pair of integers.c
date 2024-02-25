#include<stdio.h>
int main()
{
    int i,a,b,sum=0;
  printf("Enter the specified numbers : ");
  scanf("%d %d",&a,&b);
  for(i=a;i<b;i++){
        if(i%2!=0){
          sum+=i;
        }
  }
  printf("sum of all consecutive odd integers %d",sum);
}
