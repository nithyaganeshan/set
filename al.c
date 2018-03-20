#include<stdio.h>
void main()
{
char d;
printf("enter the character");
scanf("%c",&d);
if(d>='a' && d<='z')
{
printf("%c alphabet",d);
}
else
{
printf("%c not alphabet",d);
}
getch();
}
