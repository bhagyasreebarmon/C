#include<stdio.h>
int main()
{
	char str1[44],str2[9];
	printf("input string:\n");
	scanf("%s%s",str1,str2);
	if(strcmp(str1,str2)>0)
	printf("yes");
	else
	printf("no");
	return 0;
}
