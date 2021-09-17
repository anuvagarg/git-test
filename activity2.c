#include<stdio.h>

int main()
{
    int a[8]={-1,-5,2,3,23,-2,17,13},i,n,large,small;
    large=small=a[0];
    for(i=1;i<n;++i)
    {
        if(a[i]>large)
        large=a[i];
        if(a[i]<small)
        small=a[i];
    }
    int sum =small+large;
    printf("\nThe smallest element is %d\n",small);
    printf("\nThe largest element is %d\n",large);
    printf("Sum is:%d",sum);
    return 0;
}