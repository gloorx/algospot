#include <stdio.h>
#include <string.h>

int main() {
  int T;
  scanf("%d", &T);

  for(int t=0; t<T; t++) {
    char str[101] = { 0 };
    scanf("%s", str);

    for(int i=0; i<strlen(str); i=i+2) {
      printf("%c", str[i]);
    }
    for(int i=1; i<strlen(str); i=i+2) {
      printf("%c", str[i]);
    }
    printf("\n");
  }

  return 0;
}