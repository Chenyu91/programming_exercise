#include<stdio.h>
int main()
{
    int num, h, t, o;
    scanf("%d", &num);
    h = (int)num / 100;
    o = num % 10;
    t = num % 100 - o;
    printf("%d", o * 100 + t + h);
}