#include<stdio.h>
int main()
{
    int i,n,a=5;
    printf("\nEnter no. of terms: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%d\n",a);
        if(i%2==0)
        {
            a=a+5;
        }
        else
        {
            a=a+3;
        }
    }
    return 0;
}