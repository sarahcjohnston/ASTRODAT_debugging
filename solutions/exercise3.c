#include <stdio.h>
#include <stdlib.h>

int func1(int a[], int b[], int x[]){
	int force[50];

	for (int i = 0; i < 50; i++){
		force[i] = a[i] * b[i]; //spelling error referencing non-existant array
		x[i] += force[i]/2; //spelling error referencing non-existant array
	}
}

int func2(int a[], int b[], int x[]){
	for (int i = 0; i < 50; i++){
		x[i] += a[i]*a[i] - b[i]*b[i]; //** is invalid syntax in C, need to replace with another way to square
	}
}

int func3(int a[], int b[], int x[]){
	for (int i = 0; i < 50; i++){
		x[i] += a[i] - b[i];
	}
}

int func4(int a[], int b[], int x[]){
	for (int i = 0; i < 50; i++){ //loop number too large, will overflow the array
                x[i] += 2 * a[i] + 3 * b[i];
        }
}

int main(){

	printf("This is a pseudo version of a larger code which calls lots of functions to operate on data in arrays. \n");
	printf("In real large codes these functions may represent different physical processes. Here they just add an integer value.\n");
	int *a;
	int *b;
	int *x;
	a = malloc(50 * sizeof(int));
	b = malloc(50 * sizeof(int));
	x = malloc(50 * sizeof(int));

	for (int i = 0; i < 50; i++){
                a[i] = 2;
		b[i] = 3;
		x[i] = 0;
        }

	func1(a, b, x);//you could check if each of these functions work using minimal reproducible examples
	func2(a, b, x);//or you could put gdb breakpoints in here and test the results after each one!
	func3(a, b, x);
	func4(a, b, x);

	for (int i = 0; i < 50; i++){
		printf("x[%i] = %i ", i, x[i]);
                if (x[i] != 10){
			printf("ERROR! \n");
			break;}
        }

	free(a); //need to remember to free our allocated memory!
	free(b);
	free(x);

	printf("\n");
	printf("Code finished!\n");

}
