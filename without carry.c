/* This code will display sum of two digits without carrying. 
It will accept inputs from user as no of test cases and the integer.
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int t,a,b,sum;
	scanf("%d",&t);
	while(t!=0)  //condition
	{
			scanf("%d",&a); //saves the user input as a
				scanf("%d",&b); //saves the user input as b
				sum=(a+b)-10;
				printf("%d",sum); //output will display
				t--;
	}
	getch();
}
