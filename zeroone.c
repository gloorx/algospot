#include <stdio.h>

int main() {
  char string[1000000];
  scanf("%s", string);
  
  int sequence[1000000] = { 0  };
  
  int count = 0;
  for(int idx=1; idx<1000000; idx++) {
      if (string[idx] == '\0') break;
      if (string[idx] != string[idx - 1]) ++count;
      sequence[idx] = count;
    }
  
  int N;
  scanf("%d", &N);
  
  for(int n=0; n<N; n++) {
      int i, j;
      scanf("%d %d", &i, &j);
      
      if (sequence[i] == sequence[j]) {
            printf("Yes\n");
          } else {
                printf("No\n");
              }
    }
  return 0;
}
