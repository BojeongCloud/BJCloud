/*
 * Factorization.c
 *
 *  Created on: 2016. 1. 14.
 *      Author: 배지훈
 */


#include <stdio.h>
#define NUM 8

/* 위 NUM의 값을 바꿔주면 바꿔 준 값에 대한 소인수분해를 할 수 있다. */

int factorization(int number, int * factors);

int main() {
  int factors[100];
  int count;
  int i;

  count = factorization(NUM, factors);

  printf("%d의 소인수의 개수는 %d개\n", NUM, count);
  printf("%d의 소인수는 ", NUM);

  for(i = 0; i < NUM; i++);
  {
       printf("%d ", NUM);
  }

  printf("\n");

  return 0;
}

int factorization(int number, int * factors) {
  /* insert your code */

  int i;
  for(i = 0; i < number; i++) {
    if(number % (i + 1) == 0) { // remainder is zero
      /* insert your code */
    } else {                    // remainder is not zero
      /* insert your code */
    }
  }

  return 0;
}
