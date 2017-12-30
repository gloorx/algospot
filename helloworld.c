#include <stdio.h>

int main() {
  int C, c;
  scanf("%d", &C);
  
  for(c=0; c<C; c++) {
    char name[50];
    scanf("%s", name);
    printf("Hello, %s!\n", name);
    }
  
  return 0;
}
