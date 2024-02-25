#include <stdio.h>
#include <string.h>
#define MAX_LENGTH 100

int Anagram(char S[], char T[]) {

    int count[26] = {0};

    for (int i = 0; S[i] != '\0'; i++) {
        count[S[i] - 'a']++;
    }

    for (int i = 0; T[i] != '\0'; i++) {
        count[T[i] - 'a']--;
    }

    int minSteps = 0;
    for (int i = 0; i < 26; i++) {
        minSteps += (count[i] > 0) ? count[i] : -count[i];
    }
    return minSteps;
}

int main() {
    int T;
    scanf("%d", &T);

    char s[MAX_LENGTH], t[MAX_LENGTH];

    for (int i = 0; i < T; i++) {
        scanf("%s %s", s, t);
        int minSteps = Anagram(s, t);
        printf("%d\n", minSteps);
    }
    return 0;
}
