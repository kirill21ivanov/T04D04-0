#include <stdio.h>
int fib(int N)
{
  if (N == 1 || N == 2)
      return 1;
  return fib(N - 1) + fib(N - 2);
}
int main()
{
    int N, x;
    char c;
  printf("Введите число");
  x = scanf("%d%c", &N, &c);
    if ( x == 2 || c == '\n') {
      printf("%d ", fib(N));
    } else {
        printf("n/a\n");
    }
  getchar(); getchar();
  return 0;
}

    
