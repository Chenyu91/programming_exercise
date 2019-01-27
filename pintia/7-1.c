#include<stdio.h>
void meterToFoot(int N)
{
  float inchs = N / 30.48;
  int foot = (int)(inchs);
  float inch = (inchs - foot) * 12;
  int incht = (int)(inch);
  printf("%d %d\n", foot, incht);
}

int main()
{
  int n;
  scanf("%d", &n);
  meterToFoot(n);
  return 0;
}