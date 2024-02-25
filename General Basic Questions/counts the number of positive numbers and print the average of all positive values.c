#include<stdio.h>

int main() {
    int a, count = 0,sum = 0;

    for(int i = 0; i < 5; i++) {
        printf("Enter a value: ");
        scanf("%d", &a);

        if(a > 0) {
            count++;
            sum =(sum+a)/count;
        }
    }

    printf("No. of positive values = %d\n", count);
    printf("sum of positive values = %d\n", sum);

    return 0;
}
