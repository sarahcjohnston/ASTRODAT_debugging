#include <stdio.h>

int main(){
	printf("This is a pseudo force solver. It takes in an array of masses of the particle and an array of the particle accelerations.");

	int mass[50];
	int acc[50];
	int force[10];

	srand(0);

	for (int i = 0; i < 50; i++){
		mass[i] = 10;
		acc[i] = 10;
		force[i] = mass[i]*acc[i];
		if (force[i] == 100)
			printf("Item %i initialised correctly \n", i);
		else
			printf("ERROR \n");}

	} 
