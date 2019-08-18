#include <stdio.h>
int main()
{
	int str[30],ch;
	int  ind[10],loop,j;
	printf("Enter string: ");
	scanf("%d",&str);
	printf("Enter character: ");
	getchar();
	ch=getchar();
	j=0;
	for(loop=0; str[loop]!='\0'; loop++)
	{
		if(str[loop]==ch)
			ind[j++]=loop;
	}
	printf("Input string is: %d\n",str);
	printf("Indexes: ");
	for(loop=0; loop<j; loop++)
		printf("%d \t",ind[loop]);
}
