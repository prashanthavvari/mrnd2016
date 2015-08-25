#include<stdio.h>
#include<conio.h>
void max2(int a[30],int n,int *max)
{
	int k,i;
	for (i = 0; i < n; i++)
	{
		if ((a[i] != a[i + 1]) && (i + 1 <= n))
		{
			max[0] = a[i];
			max[1] = a[i + 1];
			break;
		}
	}
	if (max[0] < max[1])
	{
		k = max[0];
		max[0] = max[1];
		max[1] = k;
	}
	for (i = 0; i < n; i++)
	{
		if (max[0] < a[i])
		{
			k = max[0];
			max[0] = a[i];
			max[1] = k;
		}
		else
		{
			if ((max[1] < a[i]) && (a[i] != max[0]))
			{
				max[1] = a[i];
			}
		}
	}
}
void main()
{
	int a[30], n,i,max[2];
	printf("\n enter no.of elements");
	scanf("%d", &n);
	for (i = 0; i < n; i++)
		scanf("%d", &a[i]);
	max2(a, n, max);
	printf("%d %d", max[0], max[1]);
	getch();

}
