#include<stdio.h>
#include<math.h>
int main()
{
    float x1,x2,y1,y2,d;
    printf("Enter the 1st co-ordinates - ");
    scanf("%f %f",&x1,&y1);
    printf("Enter the 2nd co-ordinates - ");
    scanf("%f %f",&x2,&y2);
    d = sqrt(pow(x2-x1,2)+pow(y2-y1,2));
    printf("Distance between two co-ordinates is - %f",d);
}
