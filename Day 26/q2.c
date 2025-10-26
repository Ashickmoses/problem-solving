#include<stdio.h>
int main()
{
	int asciivalue;
	char ch;
	scanf("%d", &asciivalue);
	ch=(char)asciivalue;
	printf("Characer of %d is: %c \n", asciivalue, ch);
	return 0;
}
