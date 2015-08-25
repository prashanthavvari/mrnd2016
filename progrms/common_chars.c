#include<stdio.h>
#include<conio.h>
void comon(char a[50], char b[50])
{
	int x[255], y[255], i;
	char c[255];
	for (i = 0; i < 255; i++)
	{
		x[i] = 0;
		y[i] = 0;
		c[i] =  i;
	}
	for (i = 0; a[i] != '\0'; i++)
		++x[a[i]];
	for (i = 0; a[i] != '\0'; i++)
		++y[b[i]];
	for (i = 0; i < 255; i++)
	{
		if ((x[i] >= 1) && (y[i] >= 1))
			printf("%c", c[i]);
	}
}
void main()
{
	char a[50],b[50];
	gets(a);
	gets(b);
	comon(a, b);
	getch();

}