#include <stdio.h>

int sum(int *arr, int i, int j) {
  int result = 0;
  for(int n=i; n<=j; n++) {
    result += arr[n];
  }
  // printf("sum: %d ", result);
  return result;
}

double reduce_mean(int sum, int count) {
  // printf("count: %d ", count);
  double result = (double) sum / count;
  // printf("average: %lf\n", result);
  return result;
}

int main() {
  int C;
  scanf("%d", &C);
  for (int c=0; c<C; c++) {
    int N, L;
    scanf("%d %d", &N, &L);

    int arr[1001] = { 0 };
    for (int n=1; n<=N; n++) {
      scanf("%d", &arr[n]);
    }

    double min = N * 100.0;
    for (int i=1; i<=(N-L+1); i++) {
      for (int j=i+L-1; j<=N; j++) {
        // printf("<< %d, %d >>\n", i, j);
        double average = reduce_mean(sum(arr, i, j), j-i+1);
        if (average < min) {
          min = average;
        }
      }
    }
    printf("%.12lf\n", min);
  }

  return 0;
}