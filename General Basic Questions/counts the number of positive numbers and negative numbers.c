#include<stdio.h>

int main() {
    int a, high = 0,low = 0;

    for(int i = 0; i < 5; i++) {
        printf("Enter a value: ");
        scanf("%d", &a);

        if(a > 0) {
            high++;
        }
        else if(a < 0) {
            low++;
        }
    }

    printf("No. of positive values = %d\n", high);
    printf("No. of negative values = %d\n", low);

    return 0;
}


