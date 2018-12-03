#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x=1,i;
    unsigned char *p=&x;
    for(i=0;i<4;i++)
    {
        printf("%d ",*p);
        p++;
    }
}
