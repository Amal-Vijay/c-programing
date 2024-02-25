#include <stdio.h>
#include <string.h>
#define MAX_LEN 100
int String(char s[], char t[]) {
    int len_s = strlen(s);
    int len_t = strlen(t);

    if (len_s != len_t)
        return 0;

    int Cminus_s = 0, Cminus_t = 0;
    for (int i = 0; i < len_s; i++) {
        if (s[i] == '-')
            Cminus_s++;
        if (t[i] == '-')
            Cminus_t++;
    }

    if (Cminus_s > Cminus_t)
        return 0;
    return 1;
}

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        char s[MAX_LEN], t[MAX_LEN];
        scanf("%s", s);
        scanf("%s", t);

        if (String(s, t))
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
