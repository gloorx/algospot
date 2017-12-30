#include <stdio.h>

int calculateCoord(int p1, int p2, int p3) {
  if (p2 == p3) return p1;
  if (p1 == p3) return p2;
  if (p1 == p2) return p3;
}

int main() {
  int iteration; 
  scanf("%d", &iteration);
  while(iteration--) {
    int p1x, p1y, p2x, p2y, p3x, p3y, p4x, p4y;
    
    scanf("%d %d", &p1x, &p1y);
    scanf("%d %d", &p2x, &p2y);
    scanf("%d %d", &p3x, &p3y);
    printf("%d %d\n", calculateCoord(p1x, p2x, p3x), calculateCoord(p1y, p2y, p3y));
  }
  return 0;
}