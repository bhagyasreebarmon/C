#include <stdio.h>
int main()
{   int s=1;
    int i;
	for(i=9;i>=1;i--)
	{  s=(s+1)*2;
	   printf("%d:%d\n",i,s);
    }
    return 0;
}

