#include <stdio.h>
int main(void) {
  int a, b = 1;
  for (a = 100; a <= 200; a++) {
    if (a % 3 != 0) {
      printf("%6d", a);
      b++;
    }
    if (b == 7) {
      printf("\n");
      b = 1;
    }
  }
  return 0;
}
