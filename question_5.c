#include <stdbool.h>
#include <stdio.h>

int main() {
  int n, count[10];
  printf("Enter a chain of numbers (0-9). Enter 2 digit number to stop: ");
  while (true) {
    scanf("%d", &n);
    if (n < 0 || n > 9) {
      break;
    }
    count[n]++;
  }
  printf("Number\tNo. of Occurrences\n");
  for (int i = 0; i < 10; i++) {
    printf("%d\t%d\n", i, count[i]);
  }
}
