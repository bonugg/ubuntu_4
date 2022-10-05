#include <stdio.h>
#include "libeod.h"

void main() {
  int x;
  printf("Input numbers : ");
  scanf("%d", &x);
  if(eod(x) == 1)
      printf(" 짝수입니다.");
  else if(eod(x) == 2)
      printf(" 홀수입니다.");
}
