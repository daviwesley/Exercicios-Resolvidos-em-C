#include <stdio.h>
 
int main()
{
      char lower, upper;
 
      printf("Please input a lowercase character: ");
      scanf("%c", &lower);
 
      if(lower >= 'a' && lower <= 'z'){
            upper = ('A' + lower - 'a');
      }
      else{
            upper = lower;
      }
 
      printf("\nThe uppercase equivalent is: %c\n", upper);
      return 0;
}
