#include<stdio.h>
int main()
{
    int i,n,m,p=1;
    printf("\nEnter value of m & n: ");
    scanf("%d%d",&m,&n);
    for(i=1;i<=n;i++)
    {
        p=p*m;
    }
    printf("\nPower value = %d",p);
    return 0;
}