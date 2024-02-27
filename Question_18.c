#include <stdio.h>
#include <time.h>

int main() 
{
  time_t starttime, endtime;
  double diff;
  
  printf("Enter start time: ");
  scanf("%ld", &starttime);
  printf("Enter end time: ");
  scanf("%ld", &endtime);
  
  diff = difftime(endtime, starttime);
  printf("Time difference is: %.2lf seconds\n", diff);
  
  return 0;
}
