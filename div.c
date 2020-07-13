#include <stdio.h>

int main() 
{ 
	int first;
	int second;
	float quotient;
	
	printf("\n Key in first number:");

	scanf("%d",&first);

	printf(" Key in second number:");

	scanf("%d",&second);

	quotient=first/(float)second;
	printf("\n Quotient=%f\n",quotient);

	return 0;

}

