#include<stdio.h>

int main() {
    float a, b, c, p;
    printf("Enter 3 sides length of triangle - ");
    scanf("%f %f %f", &a, &b, &c);

    if (a + b > c && b + c > a && c + a > b) {
        p = a + b + c;
        printf("Perimeter of triangle is %f", p);
    } else {
        printf("Invalid triangle");
    }
    return 0;
}
