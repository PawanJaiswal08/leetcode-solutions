#include<stdio.h>
int main()
{
    int i,n,a;
    printf("\nEnter number of terms: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        a=i*i;// square of any number
        printf("%d\n",a);
    }
    return 0;
}