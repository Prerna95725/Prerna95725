/* This code will display limak follow the parent instruction .  
It will accept inputs from user as no of test cases and the strig.
The output will display the yes or no.
*/
#include<stdio.h>
#include<conio.h>
void main()
{
int N,T, i, before = -1, instruction = 1,len;
    char eating[len];
    scanf("%d",&T);
    while(T--)
    {
    scanf("%d", &N);

    for(i = 1; i <= N; i++)
    {
        scanf("%s", eating);

        if(strcmp(eating, "cookie") == 0 && before == 1)
            instruction = 0;

        before = (strcmp(eating, "cookie") == 0 ? 1 : 2); //1 represent Cookie and 2 represent Milk
    }

    if(before == 1)
        instruction = 0;

    if(instruction==1)
    {
    	printf("Yes\n");
	}
	else
	{
		printf("No\n");
	}
}
getch();
}

