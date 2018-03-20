#include<stdio.h>
#include<conio.h>
void main()
{
    int a[25],o,i,k,sum=0;
    printf("array size:\t ");
    scanf("%d",&o);
    printf("how many element want sum");
    scanf("%d",&k);
    for(i=0;i<o;i++)
    {
        scanf("%d",&a[i]);
    }
    
    for(i=0;i<k;i++)
    {
        sum=sum+a[i];
    }
    printf("%d",sum);
    getch();
}
