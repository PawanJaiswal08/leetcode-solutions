#include<stdio.h>
int main()
{
    int n,i,a=1;
    printf("\nEnter the number of terms: ");
    scanf("%d",&n);
    for(i=1;i<=n;i=i+1)
    {
        a=i*i;
        printf("\n%d",a);
    }
    return 0;
}