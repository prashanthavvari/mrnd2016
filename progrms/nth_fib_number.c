#include<stdio.h>
#include<conio.h>
int nfib(int n)
{
	int f = 0, s = 1, t,i=0;
	t = f + s;
	while (i < n)
	{
		t = f + s;
		f = s;
		s = t;
		i++;
	}
	return(t);
}
void main()
{
	int i=0;
	printf("\n enter ");
	scanf("%d", &i);
	if (i == 0)
		printf("nothing");
	else if (i ==0)
		printf("0");
	else
	{
		i = nfib(i-2);
		printf("%d", i);
	}
	getch();
}