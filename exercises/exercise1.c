#include <stdio.h>

int main()
{
	printf("The aim of this code is to start with a value, run some loops to add values to it, and return the final value \n");

	int x = 0;

	printf("Update the value of x to 10 using a loop \n");
	for (int i=0; i < 10; i++){
		x += 1;}
	printf("x = %i \n", x);

	printf("Continue updating the value of x until x = 50 \n");
	while (x < 50){
		x++; }
	printf("x = %i \n", x);

	printf("Use another loop to revert the value of x to 10 \n");
	while (x > 10){
		x += 1;}

	printf("Final value: x = %i \n", x);
	
	if (x == 10)
		printf("Code finished successfully! \n");
	else
		printf("Wrong final value :( \n");
}
		
