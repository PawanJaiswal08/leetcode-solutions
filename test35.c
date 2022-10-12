#include<stdio.h>
int main()
{
    int i,n,a=1,s=0;
    printf("\nEnter no. of terms: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        s=s+a;
        printf("%d\n",a);
        a=a+2;
    }
    printf("Sum is : %d",s);
    return 0;
}