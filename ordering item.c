/* This code will display single line and each lines containing three spaces seperated integer . 
It will accept inputs from user as no of test cases and the integer.
The output will display yes or no.
*/
#include <stdio.h>
#include <math.h>

int cal(int *h1,int *h2)
{
    int high = 0,less = 0,equal = 0;
    int i;
    for ( i = 0; i < 3; i++)
    {   
        if (h1[i] - h2[i] >= 0)
            high++;
        
        if (h1[i] - h2[i] <= 0)
            less++;
        
        if(h1[i] - h2[i] == 0)
            equal++;
    }
    if ((high == 3 || less == 3) && equal != 3)
    {
        return 1;
    }
    else
        return 0;
}
int main() 
{
	int n,i;
	scanf("%d\n",&n); //saves the user input as n
	for( i = 0; i < n; i++) //for loop execution until the condition is false
    {
        int emp1[3],emp2[3],emp3[3]; //consists of three lines
        for ( i = 0; i < 3; i++)
        {
            scanf("%d",&emp1[i]);
        }
        for ( i = 0; i < 3; i++)
        {
            scanf("%d",&emp2[i]);
        }
        for (i = 0; i < 3; i++)
        {
            scanf("%d",&emp3[i]);
        }
        if (cal(emp2,emp3)&&cal(emp1,emp2)&&cal(emp1,emp3) == 1)
        {
            printf("yes\n");
            continue; // skip 
        }
        else
            printf("no");
        
        printf("\n");
    }
    return 0;
}
