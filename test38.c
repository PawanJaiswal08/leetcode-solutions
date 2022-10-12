#include<stdio.h>
int main()
{
    int i,n,a=5,s=0;
    printf("\nEnter the no. of terms: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        s=s+a;
        printf("%d",a);
        if(a%2==0)
        {
            a=a-3;
        }
        else
        {
            a=a+5;
        }
        if(i<n)
        {
            printf("+");
        }
    }
    printf("=%d",s);
    return 0;
}