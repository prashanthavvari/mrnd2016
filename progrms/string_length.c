#include<stdio.h>
#include<conio.h>
int len(char c[100])
{
	int i=0;
	if (c!=NULL)
	for (i = 0; c[i] != '\0';i++);
	return(i);
}
void main()
{
	int s;
	char c[100];
	gets(c);
	s = len(c);
	printf("%d", s);
	getch();
}

