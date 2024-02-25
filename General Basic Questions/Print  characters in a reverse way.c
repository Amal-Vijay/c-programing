#include<stdio.h>
#include<string.h>
int main() {
    char Char[] = "ALVY DRAG";
    int L = strlen(Char);

    printf("Original string: %s\n", Char);
    printf("Reversed string: ");

    for (int i = L - 1; i >= 0; i--) {
        printf("%c", Char[i]);
    }
    printf("\n");
    return 0;
}

