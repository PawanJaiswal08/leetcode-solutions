#include<stdio.h>
#include<math.h>
int main()
{
    int i,n,m,p=1;
    printf("\nEnter the value of m & n(m^n): ");
    scanf("%d%d",&m,&n);
    i=pow(m,n);
    printf("%d",i);
}