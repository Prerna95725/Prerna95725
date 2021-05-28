/* This code will display minimum sum of costs of operations 
It will accept inputs from user as no of test cases and the integer.
The output will display the minimum cost required for the transformation.
*/
#include<stdio.h>
int main(void)
{
	int t;
	 int i,n,lit,a[5000];
	 int sum;
	scanf("%d",&t); //saves the user input as t
	while(t!=0)
	{
		scanf("%d",&n); //saves the user input as n
		for(i=0;i<n;i++)
		scanf("%d",&a[i]); //array a consisting of N distinct integer
		lit=a[0];
		for(i=1;i<n;i++) //for loop execution until the condition is false
		{
			if(a[i]<lit) 
			lit=a[i]; 
		}
		sum=1;
		sum=lit*(n-1); //decreases the size by 1 and sum of costs of operations
		printf("%d",sum);
		}
		t--;
		return 0;
	}

