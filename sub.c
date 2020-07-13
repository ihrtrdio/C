#include <stdio.h>

int main() 
{ 
	int first;
	int second;
	int difference;
	
	printf("\n Key in first number:");

	scanf("%d",&first);

	printf(" Key in second number:");

	scanf("%d",&second);

	difference=first-second;
	printf("\n Difference=%d\n",difference);

	return 0;

}

