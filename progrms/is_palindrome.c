
#include<stdio.h>
#include<conio.h>
void palindrome(char c[50])
{
	int i, j=0,x,n=0;
	for (i = 0; c[i] != '\0'; i++)
	{
		j++;
	}
	x = 0;
	n = j / 2;
	for (i = 0; i <n; i++)
	{
		if (c[i] == c[j-1])
		{
			j--;
			x = x + 1;
		}
	}
	if ((x == n))//&&(i!=0))
		printf("\n palindrome");
	else
		printf("\n not a palindrome");
}
void main()
{
	char c[50];
	gets(c);
	palindrome(c);
	getch();
}