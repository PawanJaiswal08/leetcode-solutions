#include<stdio.h>
int main()
{
    int i,n,a;
    printf("\nEnter no. of terms: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        a=(i*i)+1;
        printf("%d\n",a);
    }
    return 0;
}