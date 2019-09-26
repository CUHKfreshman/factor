#include <stdio.h>

#include <math.h>

int main() {
  unsigned int N, i, a, b, flag,y;
  scanf("%u", & N);
  b = N;
  y=sqrt(N);
  printf("%u:", N);
    for (i = 2; i <= N ; i++) {
      a = b % i;
      if(i==y&&b==N){
      printf("%u",N);
      break;}
      if (b <= 1)
        break;
      if (a == 0) {
        b = b / i;
        if (b == 1) {
          printf("%u", i);
          break;
        } else {
          printf("%u", i);
          a = b % i;
          if (a == 0) {
            for (flag = 1; a == 0 && b != 1 ; a = b % i) {
              flag++;
              b = b / i;
            }
            if (flag > 1) {
              printf("^%u", flag);

            }
          }
          if ( b != 1)
            printf("x");
        }
      }
    }
  return 0;
}
