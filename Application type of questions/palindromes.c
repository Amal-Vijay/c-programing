#include <stdio.h>
#include <string.h>

int min(int a, int b) {
    return a < b ? a : b;
}

int Palindrome(char str[], int len) {
    int op = 0;
    int i, j;

    for (i = 0, j = len - 1; i < j; i++, j--) {
        int diff = abs(str[i] - str[j]);
        op += min(diff, 26 - diff);
    }

    return op;
}

void palindrome(char str[], int len) {
    int i, j;

    for (i = 0, j = len - 1; i < j; i++, j--) {

        int diff = (str[i] > str[j]) ? (str[i] - str[j]) : (str[j] - str[i]);

        str[j] = str[i];
    }
}

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    if (str[strlen(str) - 1] == '\n') {
        str[strlen(str) - 1] = '\0';
    }

    int len = strlen(str);

    for(int i = 0; i < len; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + ('a' - 'A');
        }
    }

    int op = Palindrome(str, len);

    palindrome(str, len);

    printf("Minimum operations required: %d\n", op);
    printf("Palindrome string: %s\n", str);

    return 0;
}
