#include<stdio.h>
int main()
{
    int i,n,a=2;
    printf("\nEnter no. of terms: ");
    scanf("%d",&n);
    for(i=1;i<=n;i=i+1)
    {
        a=(i*i)+1;
        printf("\n%d",a);
    }
    return 0;
}