#include <stdio.h>

int main(){
  int n1= 123,
      n2= 123;
  float f1= 0.0f,
        f2= 0.0f;

  scanf("%i %i", &n1, &n2);
  scanf("%f %f", &f1, &f2);

  printf("%i %i\n%.1f %.1f\n", 
      n1 + n2, 
      n1 - n2, 
      f1 + f2, 
      f1 - f2
    );

  return 0;
}
