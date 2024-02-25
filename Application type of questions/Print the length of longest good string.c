#include <stdio.h>
#include <string.h>
int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        char S[101];
        scanf("%s", S);

        int len = strlen(S);
        int count = 0;

        for (int i = 0; i < len; i++) {
            if (S[i] == 'a')
                count++;
        }
        if (count > len / 2) {
            printf("%d\n", len);
        } else {
            printf("%d\n", count * 2);
        }
    }

    return 0;
}
