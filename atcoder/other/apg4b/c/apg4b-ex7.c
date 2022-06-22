#include <stdio.h>
#include <stdbool.h>

int main(void) {
  // 変数a,b,cにtrueまたはfalseを代入してAtCoderと出力されるようにする。
  bool a = true;// true または false
  bool b = false;// true または false
  bool c = true;// true または false

  // ここから先は変更しないこと

  if (a) {
    printf("At");
  }
  else {
    printf("Yo");
  }

  if (!a && b) {
    printf("Bo");
  }
  else if (!b || c) {
    printf("Co");
  }

  if (a && b && c) {
    printf("foo!");
  }
  else if (true && false) {
    printf("yeah!");
  }
  else if (!a || c) {
    printf("der");
  }

  printf("\n");
}