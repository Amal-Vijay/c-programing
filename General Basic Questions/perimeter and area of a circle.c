#include<stdio.h>
int main()
{
    float r,C,A;
    printf("Enter the Radius of circle - ");
    scanf("%f",&r);
    C = 2.0*(22.0/7.0)*r;
    A = (22.0/7.0)*r*r;
    printf("The Circumference of circle - %f\n The Area of circle - %f",C,A);
    return 0;
}
