#include <stdio.h>
#include <string.h>
int Substring(char s[], char t[]) {
    int s_len = strlen(s);
    int t_len = strlen(t);

    for (int i = 0; i <= s_len - t_len; i++) {
        int j;
        for (j = 0; j < t_len; j++) {
            if (s[i + j] != t[j])
                break;
        }
        if (j == t_len)
            return 1;
    }
    return 0;
}

int main() {
    char s[100], t[100];
    printf("Enter string s: ");
    scanf("%s", s);
    printf("Enter string t: ");
    scanf("%s", t);
    if (Substring(s, t))
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}

