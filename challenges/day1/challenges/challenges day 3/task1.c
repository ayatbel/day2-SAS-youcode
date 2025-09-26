#include <stdbool.h>   /* C99 only */
#include <stdio.h>

int main(void)
{
  bool digit_seen[10] = {false};
  int digit;
  long found = false, n;

  printf("Enter a number: ");
  scanf("%ld", &n);

  while (n > 0) {

  
    digit = n % 10;
    if (digit_seen[digit])
    {
      printf("%d",digit);
      found = true;
    }
    digit_seen[digit] = true;
    n /= 10;
  }
}
    
    
  
  
  
    
  