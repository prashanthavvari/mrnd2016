#include<stdio.h>
#include<conio.h>
void sum(int n)
{
	int s = 0,i,d=0;
	while (n > 0)
	{
		i = n % 10;
		s = s + i;
		n = n / 10;
	}
	if (s != 0)
		printf("%d", s);
	else
		printf("\n invalid");
}
void main()
{
	int n;
	printf("\n enter digit");
	scanf("%d", &n);
	if (n == 0)
	{
		printf("0");
	}
	else
	sum(n);
	getch();
}


