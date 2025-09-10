#include <stdbool.h>
#include <stdio.h>
#include <string.h>

int main() {
  const int spending_limit = 5000;
  const char *common_countries[] = {"pakistan", "uae"};
  const int max_transactions_per_hour = 3;
  int total_transactions_per_hour;
  int total_spending_today;
  bool is_suspicious = false;

  int amount;
  char country[50];

  printf("Enter transaction amount: ");
  scanf("%d", &amount);
  printf("Enter transaction country: ");
  scanf("%s", country);
  printf("Enter total transactions per hour before this one: ");
  scanf("%d", &total_transactions_per_hour);
  printf("Enter total spending today before this one: ");
  scanf("%d", &total_spending_today);

  total_spending_today += amount;
  total_transactions_per_hour++;

  if (total_spending_today > spending_limit) {
    is_suspicious = true;
    printf("Suspicious: Daily spending limit exceeded.\n");
  } else {
    bool is_common_country = false;
    for (int i = 0; i < 2; i++) {
      if (strcmp(country, common_countries[i]) == 0) {
        is_common_country = true;
        break;
      }
    }
    if (!is_common_country) {
      is_suspicious = true;
      printf("Suspicious: Foreign country transaction.\n");
    } else if (total_transactions_per_hour > max_transactions_per_hour) {
      is_suspicious = true;
      printf("Suspicious: Too many transactions in a short period.\n");
    }
  }

  if (!is_suspicious) {
    printf("Transaction is Normal\n");
  }

  return 0;
}
