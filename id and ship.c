/* This code will display ship names based on the starting character.
It will accept inputs from user as no of test cases and the character.
The output will display the name of ship */
#include <stdio.h>
int main(void) 
{
	int t;
    char l; //declares a character variable for the user inputted character
    scanf("%d",&t); //saves the user input as t
    while(t--) // loop is executing until the condition is false
    {
        scanf(" %c",&l); //saves the user input as g...
        if(l=='b'||l=='B') //checks if two character are equal if either expression 1 or expression 2 is true.....
        {
            printf("BattleShip\n");
        }
        else if(l=='c'||l=='C')
        {
            printf("Cruiser\n");
        }
        else if(l=='d'||l=='D')
        {
            printf("Destroyer\n");
        }
        else if(l=='f'||l=='F')
        {
            printf("Frigate\n");
        }
}
	return 0;
}
