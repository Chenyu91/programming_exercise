#include<stdio.h>
int main()
{
    int num1, num2, hour, minute;
    scanf("%d %d", &num1, &num2);
    hour = (int)(num1 / 100);
    minute = hour * 60 + num1 % 100 + num2;
    hour = (int)(minute / 60);
    minute = minute % 60;
    printf("%d\n", hour*100+minute);
}