/*
 * Factorization.c
 *
 *  Created on: 2016. 1. 14.
 *      Author: ������
 */


#include <stdio.h>
#define NUM 8

/* �� NUM�� ���� �ٲ��ָ� �ٲ� �� ���� ���� ���μ����ظ� �� �� �ִ�. */

int factorization(int number, int * factors);

int main() {
  int factors[100];
  int count;
  int i;

  count = factorization(NUM, factors);

  printf("%d�� ���μ��� ������ %d��\n", NUM, count);
  printf("%d�� ���μ��� ", NUM);

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
