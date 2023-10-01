#include <stdio.h>
int main() {
    //fibonacci 

  int i, n;

  int term1 = 0, term2 = 1;

  int nextTerm = term1 + term2;

  printf("Enter the number of terms to get the Fibonacci series: ");
  scanf("%d", &n);

  printf("Fibonacci Series: %d, %d, ", term1, term2);

  for (i = 3; i <= n; ++i) {
    printf("%d, ", nextTerm);
    term1 = term2;
    term2 = nextTerm;
    nextTerm = term1 + term2;
  }

  return 0;
}

