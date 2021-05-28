/* This code will display gross salary of employee.
It will accept inputs from user as no of test cases and the integer.
gross_salary=basic_salary=HRA+DA...
if the basic salary is less than 1500 then HRA=10% of basic salary and dA =90% of basc salary  
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int T,Basic_salary;
	float gross_salary;
	scanf("%d",&T);
	while(T--)
	{
			scanf("%d",&Basic_salary);
			if(Basic_salary<1500)
			{
				
				gross_salary=Basic_salary+0.1*Basic_salary+0.9*Basic_salary;
				printf("%.2f\n",gross_salary);
			}
			else if(Basic_salary>=1500)
			{
			
				gross_salary=Basic_salary+500+Basic_salary*0.98;
				printf("%.2f\n",gross_salary);
			}
			}
			getch();
}
