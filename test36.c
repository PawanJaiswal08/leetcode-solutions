#include<stdio.h>
int main()
{
    int i,n,a=2,s=0;
    printf("\nEnter no. of terms: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        s=s+a;
        printf("%d",a);
        if(i<n)
        printf("+");
        a=a*10+2;
    }
    printf(" = %d",s);
    return 0;
}