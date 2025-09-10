#include <stdio.h>
#include <stdlib.h>

int main() {
  int age = 0, eyesight = 0, written = 0, driving = 0, med_certificate = 0;

  printf("Enter your age: ");
  scanf("%d", &age);

  if (age < 18) {
    printf("You are not eligible.");
    exit(0);
  }

  printf("Did you pass the eyesight test? (0/1): ");
  scanf("%d", &eyesight);

  if (eyesight == 0) {
    printf("You are not eligible.");
    exit(0);
  }

  printf("Did you pass the written test? (0/1): ");
  scanf("%d", &written);

  if (written == 0) {
    printf("You are not eligible.");
    exit(0);
  }

  printf("Did you pass the driving test? (0/1): ");
  scanf("%d", &driving);

  if (eyesight == 0 || age < 60) {
    printf("You are not eligible.");
    exit(0);
  }

  printf("Do you have Medical Fitness Certificate? (0/1): ");
  scanf("%d", &med_certificate);

  if (eyesight == 0) {
    printf("You are not eligible.");
    exit(0);
  }

  printf("Congrats! You are eligible.");
  return 0;
}
