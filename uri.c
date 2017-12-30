#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
  int C;
  scanf("%d", &C);
  for (int c=0; c<C; c++) {

    char url[81] = { 0 };
    scanf("%s", url);

    for (int i=0; i<strlen(url); i++) {
      if (url[i] == '%' && url[i+1] == '2') {
        char table[11] = " !__$%__()*";
        int pointer = strtol((char[]){url[i+2], 0}, NULL, 16);
        printf("%c", table[pointer]);
        i = i+2;
      } else {
        printf("%c", url[i]);
      }
    }
    printf("\n");

  }
  
  return 0;
}