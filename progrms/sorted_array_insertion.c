#include<stdio.h>
#include<conio.h>
void srt(int a[100],int n)
{
	int i, x, l, pos,temp;
	scanf("%d", &x);

	if (a[0] >= x)
	{
		for (l = n + 1; l >0; l--)
			a[l] = a[l - 1];
		a[0] = x;
		n = n + 1;
	}
	if (a[n]<=x)
	{
		a[n] = x;
		
	}
	for (i = 0; i <=n; i++)
	{
		if((i > 0))
		if ((i + 1 <= n))

		{
			if ((a[i] < x) && (a[i + 1] >= x))
			{
				pos = i + 1;

				for (l = n + 1; l > pos; l--)
				{
					a[l] = a[l - 1];
				}
				a[pos] = x;
				n = n + 1;
			}
		}	
	}
	for (i = 0; i < n; i++)
		printf("%d", a[i]);
}
void main()
{
	int a[100], i, n;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	srt(a,n);
	getch();
}
