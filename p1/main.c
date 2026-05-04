#include <stdio.h>

int main(void)
{
  int N = 0;
  int found = 0;

  scanf("%d", &N);

  for(int a = 1; a <= N/ 900; a++)
    {
      for(int b = 1; b<= N / 750; b++)
        {
          for(int c = 1; c <= N / 200; c++)
            {
            if(900 * a + 750 * b + 200 * c == N&& b%2 == 0 && (c < a || c < b)) 
            {
              printf("%d %d %d\n", a, b, c);
              found = 1;
            }
            }
        }
    }
  if (found == 0) {printf("none\n");}
  return 0;
}
