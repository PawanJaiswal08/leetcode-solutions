#include <stdio.h>
#include <conio.h>
int main()
{
    int n, key,l,h,mid,x;
    printf("Enter the size of Array");
    scanf("%d", &n);
    int a[n];
    printf("Enter the key");
    scanf("%d", &key);
    printf("Enter the elements of Array");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
     l = 0;
     h = n - 1;
     mid = ((l + h)/2);
     x=mid;
    while (l <= h)
    {
        if (key == a[x])
        {
            printf("position of the key in array\n");
            printf("%d",x);
            break;
        }
        if (a[x] > key)
        {
            h = x - 1;
        }
        if (a[x] < key)
        {
            l = x + 1;
        }
    }
    return 0;
}