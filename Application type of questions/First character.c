#include <stdio.h>
#include <string.h>
#define MAX_LENGTH 1000
int firstNonRepeatingChar(char *str)
{
    int count[26] = {0};
    int i, index = -1;
    for (i = 0; str[i] != '\0'; i++)
    {
        count[str[i] - 'a']++;
    }
    for (i = 0; str[i] != '\0'; i++)
    {
        if (count[str[i] - 'a'] == 1)
        {
            index = i;
            break;
        }
    }
    return index;
}

int main()
{
    int T;
    char str[MAX_LENGTH];
    scanf("%d", &T);

    while (T--)
    {
        scanf("%s", str);
        int result = firstNonRepeatingChar(str);
        printf("%d\n", result);
    }
    return 0;
}

