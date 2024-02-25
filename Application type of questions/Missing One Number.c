/*#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int isValidSequence(const char *str) {
    int len = strlen(str);
    if (len == 0)
        return 0;

    int prev_num = -1;
    for (int i = 0; i < len; i++) {
        if (str[i] < '0' || str[i] > '9')
            return 0;

        int num = str[i] - '0';
        if (prev_num != -1 && num != prev_num + 1)
            return 0;

        prev_num = num;
    }
    return 1;
}

int findMissingNumber(const char *str) {
    if (!isValidSequence(str))
        return -1;

    int len = strlen(str);
    int expected_num = 1;
    for (int i = 0; i < len; i++) {
        if (str[i] - '0' != expected_num) {
            return expected_num;
        }
        expected_num++;
    }
    return -1;
}

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        char str[10];
        scanf("%s", str);

        int missing_num = findMissingNumber(str);
        printf("%d\n", missing_num);
    }

    return 0;
}*/




