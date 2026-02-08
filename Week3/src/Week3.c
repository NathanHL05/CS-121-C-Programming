/*
 ============================================================================
 Name        : Week3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

typedef struct {
	int accountNumber;
	float balance;
	char name[80];
	float interest;


}Account;

#include <stdio.h>
#include <stdlib.h>
void addThree(int i);
void changeVar(int *i);
void getInfo(Account *p);
void display(Account *p);




int main(void) {
	int userInt = 0;
	printf("Input integer: ");
	scanf("%d", &userInt);
	addThree(userInt);
	printf("%d\n", userInt);

	changeVar(&userInt);
	printf("%d\n", userInt);



	Account myAccount;

	getInfo(&myAccount);

	display(&myAccount);

	return EXIT_SUCCESS;


}

void addThree(int i){
	int new = i + 3;
	printf("%d\n", new);
	return;
}

void changeVar(int *i){
	*i = *i + 3;
	printf("%d\n", *i);
	return;
}

void getInfo(Account *p){
	printf("Enter the account number: ");
	scanf("%d", &p->accountNumber);
	printf("Enter the account name: ");
	scanf("%s", &p->name[0]);
	printf("Enter the account balance: ");
	scanf("%f", &p->balance);
}

 void display(Account *p){
		printf("Account information:\n");
		printf("Number: %d\n", p->accountNumber);
		printf("Name: %s\n", p->name);
		printf("Balance: $%.2f\n", p->balance);
	}




