#include <stdio.h>

int main(void)
{
  int N = 0;
  bool found = false;

  scanf("%d", &N);

  for(int a = 1; a * 900 < N; a++)
    {
      for(int b = 2; a * 900 + b * 750 < N; b += 2)
        {
          for(int c = 1; a * 900 + b * 750 + c * 200 <= N; c++)
            {
            if(900 * a + 750 * b + 200 * c == N && (c < a || c < b)) 
            {
              printf("%d %d %d\n", a, b, c);
              found = true;
            }
            }
        }
    }
  if (found == false)
    printf("none\n");
  return 0;
}
