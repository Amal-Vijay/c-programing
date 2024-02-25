#include <stdio.h>
#include <string.h>
int main()
{
    int T;
    scanf("%d", &T);

    while (T--)
    {
        char S[1001];
        scanf("%s", S);

        int len = strlen(S);
        int max = 0;

        for (int i = 0; i < len; i++)
        {
            int visit[256] = {0};

            for (int j = i; j < len; j++)
            {
                if (visit[S[j]])
                    break;

                visit[S[j]] = 1;

                int length = j - i + 1;
                if (length > max)
                    max = length;
            }
        }
        printf("%d\n", max);
    }
}

