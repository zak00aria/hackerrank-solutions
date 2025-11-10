#include <stdio.h>

int max(int n1, int n2);
int max_of_four(int n1, int n2, int n3, int n4);

int main(){
  int n1= 0,
      n2= 0,
      n3= 0,
      n4= 0;

  scanf("%i\n%i\n%i\n%i", &n1, &n2, &n3, &n4);

  printf("%i\n", max_of_four(n1, n2, n3, n4));

  return 0;
}

int max_of_four(int n1, int n2, int n3, int n4){
  return max(max(n1, n2), max(n3, n4));
}

int max(int n1, int n2){
  return n1 > n2 ? n1 : n2;
}
