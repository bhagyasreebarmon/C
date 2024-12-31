/*
1+3+5+7+9+11 output this formula result using loop
*/
#include <stdio.h>
int main() {
    int i,p=1;
    for(i=3;i<=11;i=i+2)
    p=p+i;
    printf("p=%d",p);
    return 0;
}

