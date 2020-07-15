
#include <unistd.h>
#include <ft_putchar.c>

void print(int x, char start, char mid, char end)
{
  int i;
  i = 1;
  while ( i <= x)
  {
    if (i==1)
    {
      ft_putchar(start);
    }
    else if (i == x)
    {
      ft_putchar(end);
    }
    else
    {
      ft_putchar(mid);
    }
    i++;
  }
  ft_putchar('\n');
  
}

void rush(int x, int y)
{
      int i = 1;
       while (i <= y)
    {
      if (i == 1)
      {
        print(x, 'A', 'B', 'C' );
      }
      else if (i == y)
      {
       print(x, 'B', ' ' ,'B');
      }
      else
      {
        
         print(x, 'A', 'B', 'C');
      }
      i++;
    }
  
  
}


