#include <stdio.h>
#include <string.h>

int main() {
  int C;
  scanf("%d", &C);
  for(int c=0; c<C; c++) {
    
    char string[10001] = { 0 };
    scanf("%s", string);
    
    char stack[10001] = { 0 };
    int pointer = 0;
    int well_matched = 1;
    for(int i=0; i<strlen(string); i++) {

      switch(string[i]) {
        case '(':
        case '{':
        case '[':
          stack[pointer++] = string[i];
          break;
        
        case ')':
          if (stack[--pointer] != '(') {
            well_matched = 0;
          }
          break;
        case '}':
          if (stack[--pointer] != '{') {
            well_matched = 0;
          }
          break;
        case ']':
          if (stack[--pointer] != '[') {
            well_matched = 0;
          }
          break;
      }
      
      if (!well_matched) {
        break;
      }
    }
    
    (pointer == 0) && well_matched && printf("YES\n") || printf("NO\n");
  }
  
  return 0;
}