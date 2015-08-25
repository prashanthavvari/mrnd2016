#include<stdio.h>
#include<conio.h>
void fun(int a[30], int n)
{
	int i, j, k = 0, s, temp = 0;
printf("no.of times?\n");
	scanf("%d", &s);
	for (i = 0; i < s; i++)
	{
		
		temp = a[n - 1];

		for (j = n - 1; j > 0; j--)
		{
			a[j] = a[j - 1];
		}
		a[0] = temp;
	}
	for (i = 0; i < n; i++)
		printf("%d", a[i]);

}
void main()
{
	int a[30];
	int i, n;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
		scanf("%d", &a[i]);
	fun(a, n);
	getch();
}


