#include <stdio.h>
#include <string.h>

int Substrings(char *s)
{
    int n = strlen(s);
    int count[3] = {0};
    int result = 0;
    int substrCount = 0;

    int L = 0;
    for (int R = 0; R < n; ++R)
    {
        if (s[R] >= 'a' && s[R] <= 'c')
        {
            count[s[R] - 'a']++;
        }

        while (count[0] > 0 && count[1] > 0 && count[2] > 0)
        {
            substrCount += n-R;
            count[s[left] - 'a']--;
            left++;
        }

        result += substrCount;
    }
    return result;
}

int main()
{
    int T;
    scanf("%d", &T);

    while (T--)
    {
        char S[1001];
        scanf("%s", S);

        int result = countSubstrings(S);
        printf("%d\n", result);
    }
    return 0;
}
