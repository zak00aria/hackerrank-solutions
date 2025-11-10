#include <stdio.h>

void update(int *a,int *b);
int abs(int a);

int main() {
  int a = 0,
      b = 0;
  int *pa = &a,
      *pb = &b;

  scanf("%d %d", &a, &b);

  update(pa, pb);
  printf("%d\n%d", a, b);

  return 0;
}

void update(int *a,int *b){
  int sum = *a + *b,
      sub = *a - *b;
  *a = sum;
  *b = abs(sub);
}
int abs(int a){
  return a < 0 ? -a : a;
}
