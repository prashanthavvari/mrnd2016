#include<stdio.h>
#include<conio.h>
void quicksort(int x[30],int first,int last){    
int pivot,j,temp,i;

if(first<last){   
      pivot=first;  
	        i=first;   
			      j=last;

while(i<j){    
         while(x[i]<=x[pivot]&&i<last)  
		                i++;            
	 while(x[j]>x[pivot]) 
                              j--;     
if(i<j){ 
temp=x[i];
 x[i]=x[j];   
 x[j]=temp;    
}     
 }

temp=x[pivot];    
x[pivot]=x[j];    
x[j]=temp;       
quicksort(x,first,j-1);  
quicksort(x,j+1,last);

}
}
void add(int a[30], int n)
{
	int i, j, lb, ub, mid, num, x = 0, y,c=0;
	lb = 1;
	ub = n;
	y = n;
	scanf("%d", &num);
	printf("the tuples are");
	if (n == 1)
	{
		printf("%d", a[1]); c = 1;
	}
	if (n > 1)
	{
		for (i = 1; i <= n; i++)
		{
			y = ub;
			j = i + 1;
			if (a[i] == num&&a[i + 1] != num){
				printf("%d\n", a[i]);
				c = 1;
			}
			while (j <= n)
			{
				if (y > 0)
					mid = (j + y) / 2;

				if (a[mid] + a[i] == num)
				{
					if ((a[i] != a[i - 1]))
						printf("%d,%d\n", a[i], a[mid]);
					c = 1;
					break;
				}
				else if (a[mid] + a[i] < num)
				{
					j = mid + 1;
				}
				else if (a[mid] + a[i] > num)
				{
					y = mid - 1;
					x = x + 1;
				}
				if (x > n)
					break;
				if (y < j) break;
			}
			if (mid <= 0 || ub <= 0)
				break;
		}
	}
	if (c == 0)
		printf(" not found");
}
void main()
{
	int a[30], n,i;
	printf("enter size");
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	scanf("%d", &a[i]);
	quicksort(a,0,n);
	add(a, n);
	getch();
}
