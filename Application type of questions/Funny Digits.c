#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T); //number of test cases

    while (T--) {
        int N;
        scanf("%d", &N); //number N for each test case

        int ans = 0;
        int last_digit = -1; // Initialize the last digit to an invalid value

        // Iterate over each digit of N from right to left
        while (N > 0) {
            int digit = N % 10; // Extract the last digit
            N /= 10; // Remove the last digit

            if (digit <= last_digit || last_digit == -1) {
                ans = digit * 10 + ans; // Append the digit to the left of the answer
                last_digit = digit; // Update the last digit
            } else {
                ans = (digit - 1) * 10 + 9; // Append 9 to the left of the answer and decrement the current digit by 1
                last_digit = digit - 1; // Update the last digit
            }
        }

        printf("%d\n", ans); // Print the answer for the current test case
    }

    return 0;
}

