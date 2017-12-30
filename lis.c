#include <stdio.h>

int main() {
  int C;
  scanf("%d", &C);
  
  for (int c=0; c<C; c++) {
    int N;
    scanf("%d", &N);
    int sequence[500] = { 0 };
    int memory[500] = { 1 };
    
    int lis = 1;
    for (int n=0; n<N; n++) {
      scanf("%d", &sequence[n]);
      if (n == 0) continue;
      
      int max_sub_lis = 1;
      for (int m=0; m<n; m++) {
        if (sequence[m] < sequence[n] && max_sub_lis <= memory[m]) {
          max_sub_lis = memory[m] + 1;
        }
      }
      
      memory[n] = max_sub_lis;
      if (lis < memory[n]) lis = memory[n];
      // print(sequence, memory, N);
    }
    printf("%d\n", lis);
  }
  
  return 0;
}

void print(int *sequence, int *memory, int N) {
  printf("sequence: ");
  for (int n=0; n<N; n++) {
    printf("%d ", sequence[n]);
  }
  printf("\n");
  
  printf("memory:   ");
  for (int n=0; n<N; n++) {
    printf("%d ", memory[n]);
  }
  printf("\n");
}