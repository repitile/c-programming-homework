#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,a[50],i;
    scanf("%d", &n);
    for(i=0;i<n;i++)
        scanf("%d", &a[i]);
    for(i=n-1;i>=0;i--)
        printf("%d\n", a[i]);
    return 0;
}
