#include<stdio.h>
int main()
{
    int i,n,a=1,s=0;
    printf("\nEnter the no. of terms: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        s=s+a;
        printf("%d",a);
        if(i%2==0)
        {
            a=a+1;
            printf("+");
        }
        else
        {
            a=a+1;
            printf("-");
        }
    }
    printf("=%d",s);
    return 0;
}