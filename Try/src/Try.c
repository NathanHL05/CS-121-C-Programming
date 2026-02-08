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

#define BOB 3

int add2numbers(int a, int b);


int main(void) {

	int i = 3;

	int j = 5;

	char myName[80];

	printf("Enter your name: ");
	scanf("%s", myName);


	printf("Enter a value for i: ");
	scanf("%d", &i);

	printf("Enter a value for j: ");
	scanf("%d", &j);

	int sum = add2numbers(i,j);

	printf(myName);

	printf("\n i %d, j %d\n", i, j);

	printf("The sum is: %d\n", sum);

	if(i > j){
		printf("The smaller number is %d", j);
	}
	else if(j>i){
		printf("The smaller number is %d", i);
	}
	else{
		printf("The two numbers are equal");
	}






	return EXIT_SUCCESS;
}

int add2numbers(int a, int b){
	return a + b;
}

