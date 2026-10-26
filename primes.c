#include <stdio.h>
#include <stdlib.h>

/* Counts the prime numbers below n, the slow way: it tries every divisor. */
static int is_prime(int k) {
  if (k < 2) return 0;
  for (int d = 2; d < k; d++)
    if (k % d == 0) return 0;
  return 1;
}

int main(int argc, char **argv) {
  int n = argc > 1 ? atoi(argv[1]) : 1000;
  int count = 0;
  for (int k = 2; k < n; k++) count += is_prime(k);
  printf("%d\n", count);
  return 0;
}
