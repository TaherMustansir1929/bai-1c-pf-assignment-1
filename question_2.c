#include <stdio.h>

int main() {
  int x, y;
  printf("Enter the value of coordinate (x, y): ");
  scanf("%d %d", &x, &y);

  if (x > 0 && y > 0) {
    printf("The point (%d, %d) lies in quadrant I\n", x, y);
  } else if (x < 0 && y > 0) {
    printf("The point (%d, %d) lies in quadrant II\n", x, y);
  } else if (x < 0 && y < 0) {
    printf("The point (%d, %d) lies in quadrant III\n", x, y);
  } else if (x > 0 && y < 0) {
    printf("The point (%d, %d) lies in quadrant IV\n", x, y);
  } else {
    printf("The point (%d, %d) is quadrantal\n", x, y);
  }
}
