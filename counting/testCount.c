#include <stdio.h>
#include <count.h>
#include <utilities.h>

#define INPUT {1,2,3,4,5,6,7,8,10,9}
int main(int argc, char *argv[])
{
  int input[] = INPUT;
  printf("Input Array:\t");
  printIntArray(input, sizeof(input)/sizeof(int));
  printf("Num inversions:\t%d\n", sortAndCountInversions(input, sizeof(input)/sizeof(int)));
  printf("Output Array:\t");
  printIntArray(input, sizeof(input)/sizeof(int));
  return 0;
}
