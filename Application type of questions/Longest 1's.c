#include <stdio.h>
int max(int a, int b) {
    return (a > b) ? a : b;
}

int longestSubarray(int arr[], int n, int k) {
    int maxL = 0;
    int left = 0, right = 0;
    int zeroCount = 0;

    while (right < n) {
        if (arr[right] == 0)
            zeroCount++;

        while (zeroCount > k) {
            if (arr[left] == 0)
                zeroCount--;
            left++;
        }

        maxL = max(maxL, right - left + 1);
        right++;
    }

    return maxL;
}

int main() {
    int N, K;
    scanf("%d %d", &N, &K);
    int arr[N];

    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    int length = longestSubarray(arr, N, K);
    printf("%d\n", length);

    return 0;
}

