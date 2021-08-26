#include <stdio.h>

int main()
{
    int a=1,d=2,n,s;
    printf("Required series is-\n");
    for(n=1; n<=10; n++)
    {
        s=a+(n-1)*d;
        printf("%d ",s);
    }
    return 0;
}