#include<stdio.h>
int main()
{
    int i,a;
  printf("Enter the specified number : ");
  scanf("%d",&a);
for(i=2;i<100;i++){
    if(i%a==3){
        printf(" %d ",i);
    }
}
}
