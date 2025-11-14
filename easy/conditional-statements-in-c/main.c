#include <stdio.h>

void printNumberInLetters(long n);

int main() {
  long n = 0;
  scanf("%ld", &n);
  if(n<10){
    printNumberInLetters(n);
  } else {
    printf("Greater than 9");
  }
  printf("\n");

  return 0;
}

void printNumberInLetters(long n){
  char* numbers[] ={"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
  printf("%s\n", numbers[n-1]);
}
