/*
 ============================================================================
 Name        : Week2.c
 Author      : Nathan Larson
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

float findMin(float arr[]);
float findMax(float arr[]);
float findAvg(float arr[]);
int getMinimum(int a, int b);

int main(void) {
	int i = 1;
	int item = 0;
	printf("1 : Milk\n");
	printf("2 : Eggs\n");
	printf("3 : Beef\n");
	printf("4 : Carrots\n");
	printf("5 : Juice\n");
	while(i){
		printf("What would you like to buy (use number identifier): ");
		scanf("%d", &item);

		switch (item){
			case 1:
				printf("$3\n");
				break;
			case 2:
				printf("$2\n");
				break;
			case 3:
				printf("$12\n");
				break;
			case 4:
				printf("$2\n");
				break;
			case 5:
				printf("$7\n");
				break;
			default:
				printf("Your input did not match any item");
				break;
		}
		printf("Do you want to add another item? 1=yes 0=no: ");
		scanf("%d",&i);
	}

	for (int x = 1; x <= 10; x++ ){
		printf("%d\n",x);
	}
	for (int x = 10; x > 0; x--){
		printf("%d\n", x);
	}

	float list[10];
	printf("Enter 10 float values\n");
	for (int x = 0; x < 10; x++){
		printf("Enter float value: ");
		float input = 0.0;
		scanf("%f", &input);
		list[x] = input;
	}
	float min = findMin(list);
	float max = findMax(list);
	float avg = findAvg(list);
	for(int x = 0; x <10;x++){
		printf("%f\n", list[x]);
	}
	printf("The minimun value is: %f\n", min);
	printf("The maximum value is: %f\n", max);
	printf("The average value is: %f\n", avg);

	int a;
	int b;
	printf("Please enter an integer value for a: ");
	scanf("%d", &a);

	printf("Please enter an integer value for b: ");
	scanf("%d", &b);

	int minimum;
	minimum = getMinimum(a,b);
	printf("The smaller value is %d", minimum);


	return EXIT_SUCCESS;
}

float findMin(float arr[]){
	float min = 100000;
	for(int x = 0; x < 10; x++){
		float input1 = arr[x];
		if(input1 < min){
			min = input1;
		}
	}
	return min;
}

float findMax(float arr[]){
	float max = -9999999;
	for(int x = 0; x < 10; x++){
		float input1 = arr[x];
		if(input1 > max){
			max = input1;
		}
	}
	return max;
}
float findAvg(float arr[]){
	float avg;
	float sum = 0;
	for(int x = 0; x < 10; x++){
			float input1 = arr[x];
			sum += input1;
		}
	avg = sum / 10;
		return avg;
}
int getMinimum(int a, int b){
	if(a>b){
		return b;
	}
	else if(b>a){
		return a;
	}
	else {
		return a;
	}
}
