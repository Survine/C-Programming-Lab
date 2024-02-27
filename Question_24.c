#include <stdio.h>
#include <time.h>

int main() 
{
  time_t birthyear, currentyear;
  int diff;
  
  printf("Enter birth year :");
  scanf("%ld", &birthyear);
  printf("Enter current year :");
  scanf("%ld", &currentyear);
  
  diff = difftime(currentyear, birthyear);
  printf("Your age is %d years\n", diff);
  
  return 0;
}
