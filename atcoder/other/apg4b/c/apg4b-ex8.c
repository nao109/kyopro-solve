#include <stdio.h>

int main(void) {
  int p;
  scanf("%d", &p);
  
  int price;

  // パターン1
  if (p == 1) {}

  // パターン2
  if (p == 2) {
    char text[50];
    scanf("%s", text);
    printf("%s!\n", text);
  }

  scanf("%d", &price);
  
  int N;
  scanf("%d", &N);

  printf("%d\n", price * N);
}