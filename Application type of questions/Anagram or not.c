#include <stdio.h>
#include <string.h>
int Anagrams(char *s1, char *s2) {
    int count[256] = {0};         //array to count occurrences of characters
    int len1 = strlen(s1);
    int len2 = strlen(s2);
    if (len1 != len2)
        return 0;
    for (int i = 0; i < len1; i++)          // Count repeating characters
        count[(int)s1[i]]++;
    for (int i = 0; i < len2; i++) {
        if (--count[(int)s2[i]] < 0)
            return 0;       // Decrease count for each character
    }
    return 1;
}

int main() {
    int N;
    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        char S[100], T[100];
        scanf("%s %s", S, T);
        if (Anagrams(S, T))
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}

