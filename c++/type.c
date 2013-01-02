#include <stdio.h>

int main()
{
  printf("These are the memory size information on my system\n");

  printf("\n Int : %d bits\n", sizeof(int) * 8);
  printf("Float : %d bits\n", sizeof(float) * 8);
  printf("Char : %d bits\n", sizeof(char) * 8);
  printf("Double : %d bits\n", sizeof(double) * 8);
  printf("Short : %d bits\n", sizeof(short) * 8);
  printf("Long : %d bits\n", sizeof(long) * 8);

  getchar();
  return 0;
}
