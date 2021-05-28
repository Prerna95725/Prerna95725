/* the code will display maximum number among a and b by the minimum number among a and b
*/
#include<stdio.h>
#include<conio.h>
int max(int a,int b)
{
return (a>b)?a:b;	//find max between two number
}
int min(int a,int b)
{
	return (a>b)?b:a; //find min between two number
}
int main()
{
	int a,b,c,i,d=0;
	int T;
	scanf("%d",&T);
	while(T--)
	{
	scanf("%d",&a); // alice initially has the number a
		scanf("%d",&b); // bob has the number b
			scanf("%d",&c); // c denote n turns of game
			for(i=1;i<=c;i++)//loop execute until n no.of turns
			{
				if(d==0)
				{
					a=a+i;
					d=1;
				}
				else
				{
					b=b+i;
					d=0;
				}
				}
				printf("%d",max(a,b)/min(a,b));
			}
				return 0;
			}

