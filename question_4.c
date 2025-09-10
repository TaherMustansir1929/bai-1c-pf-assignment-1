#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) { return (*(int *)a - *(int *)b); }

int main() {
  int hand[5] = {0, 0, 0, 0, 0};
  int arr_size = sizeof(hand) / sizeof(int);

  printf("Enter 5 card numbers (1-13): ");
  scanf("%d %d %d %d %d", &hand[0], &hand[1], &hand[2], &hand[3], &hand[4]);

  qsort(hand, arr_size, sizeof(int), compare);

  if (hand[0] == hand[1] && hand[1] == hand[2] && hand[3] == hand[4]) {
    printf("It is a full house.\n");
  } else if (hand[0] == hand[1] && hand[2] == hand[3] && hand[3] == hand[4]) {
    printf("It is a full house.\n");
  } else {
    printf("It is not a full house.\n");
  }

  return 0;
}
