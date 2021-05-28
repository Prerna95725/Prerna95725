/* the code will display maximum number among a and b by the minimum number among a and b
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c,i,d=0;
	
	
	scanf("%d",&a); // alice initially has the number a
		scanf("%d",&b); // bob has the number b
			scanf("%d",&c); // c denote n turns of game
			for(i=1;i<=c;i++)
			{
				if(d==0)
				{
					a=a*i;
					d=1;
				}
				else
				{
					b=b*i;
					d=0;
				}
				}
				printf("%d",a/b);
				getch();
			}

