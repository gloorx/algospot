#include <stdio.h>

int main() {
  int T;
  scanf("%d", &T);
  for (int t=0; t<T; t++) {
    int x = 0;
    int y = 0;
    int input_x, input_y;

    // first
    scanf("%d %d", &input_x, &input_y);

    if ((x == 0) || (x != input_x)) x += input_x;
    else x -= input_x;
    if ((y == 0) || (y != input_y)) y += input_y;
    else y -= input_y;
    // printf("[%d %d]\n", x, y);

    // second
    scanf("%d %d", &input_x, &input_y);
    if ((x == 0) || (x != input_x)) x += input_x;
    else x -= input_x;
    if ((y == 0) || (y != input_y)) y += input_y;
    else y -= input_y;
    // printf("[%d %d]\n", x, y);
    
    // third
    scanf("%d %d", &input_x, &input_y);
    if (x == 0) x += input_x;
    else x -= input_x;
    if (y == 0) y += input_y;
    else y -= input_y;

    printf("%d %d\n", x, y);
  }
  return 0;
}