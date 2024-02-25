#include <stdio.h>

int Count(int num) {
  int count = 0;
  int mask = 1 << (sizeof(int)*2);

  while (mask && !(num & mask)) {
    count++;
    mask >>= 1;
  }

  return count;
}

int main() {
  unsigned int num;

  printf("Enter an integer: ");
  scanf("%u", &num);

  int Lz = Count(num);

  printf("Number of leading zeros: %d\n", Lz);

  return 0;
}
