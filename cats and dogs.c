/*Chef is a farmer and a pet lover. He has a lot of his favorite pets cats and dogs in the barn. He knows that there are C cats and D dogs in the barn.
 Also, one day went to field and found that there were L legs of the animals touching the ground. Chef knows that cats love to ride on the dogs. 
 So, they might ride on the dogs, and their legs won't touch the ground and Chef would miss counting their legs. Chef's dogs are strong enough to ride at max 
 two cats on their back.

It was a cold foggy morning, when Chef did this counting. So he is now wondering whether he counted the legs properly or not. 
Specifically, he is wondering whether it is possible that he counted correctly. Please help Chef in finding it.
*/
#include<stdio.h>
void main()
{
	int T,c,d,l,min_legs,max_legs; //declares a integer variable for the user inputted function
	scanf("%d",&T);
	while(T--) //for loop execution
	{
		scanf("%d %d %d",&T,&c,&l); //saves the user input as b,c,l 
		max_legs=(c+d)*4; // c represent cat and d represent dog
		if(c>(d*2))
	{
		
		min_legs=(c-(d*2)+d)*4;
	}
	else
	
		min_legs=(d*4);
	
	if(l%4==0 && l>=min_legs && l<=max_legs) //three conditions are necessary to true
	{
		printf("yes\n"); //if chef counted the legs properly.... 
	}
	else{
		printf("no\n"); //if chef not counted the legs properly...
	}
		
}
getch();
}
