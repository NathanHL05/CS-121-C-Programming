/*
 ============================================================================
 Name        : Try.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>


int add2numbers(int a, int b);


int main(void) {

	int i = 3;

	printf("Enter a number: ");
	scanf("%d", &i);
	printf("Your number is: %d\n", i);

	float j = 5;

	printf("Enter a floating point value: ");
	scanf("%f", &j);
	printf("%.5f\n", j);
	printf("%.e\n", j);
	printf("%f\n", j);

	char myName[80];

	printf("Enter your name: ");
	scanf("%s", myName);

	printf("Your name is: ");
	printf(myName);

	int a;
	int b;

	printf("\nEnter a value for a: ");
	scanf("%d", &a);
	printf("\nEnter a value for b: ");
	scanf("%d", &b);

	int sum = add2numbers(a,b);



	printf("\n a %d, b %d\n", a, b);

	printf("The sum is: %d\n", sum);

	if(a > b){
		printf("The smaller number is %d", b);
	}
	else if(b>a){
		printf("The smaller number is %d", a);
	}
	else{
		printf("The two numbers are equal");
	}






	return EXIT_SUCCESS;
}

int add2numbers(int a, int b){
	return a + b;
}

