#include<stdio.h>
#include<conio.h>
void main()
{
	int t;
	scanf("%d",&t);
	while(t--);
	{
	int n,j;
	scanf("%d",&n);
	int a[n],i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	if(n%2==0||a[0]!=1||a[n-1]!=1)
	{
		printf("no");
	}
	else
	{
		j=1;
		for(i=0;i<n/2;i++)
		{
			if(a[i]==j)
			{
				j++;
			}
			else
			{
				break;
			}
		}
	j=j-1;
	for(i=n/2+1;i<n;i++)
		{
			if(a[i]==j)
			{
				j--;
			}
			else
			{
				break;
			}
		}
		if(i==n)
		printf("yes");
		else
		printf("no");
	}
//	t--;
}
getch();
}
