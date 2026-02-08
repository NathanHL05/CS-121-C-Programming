/*
 ============================================================================
 Name        : week4.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

typedef struct account {
	struct account *next;
	int accountNumber;
	float balance;
	char name[80];
}Account;

#include <stdio.h>
#include <stdlib.h>
void setValues(Account *p);
void display(Account *p);
Account* makeAccounts(int amount);
void displayAll(Account *p);




int main(void) {
	int customers = 0;
	printf("How many accounts would you like to make?");
	scanf("%d", &customers);


//int *p = NULL;
//
//p = (int*)malloc(sizeof(int));
//
//if (p==NULL){
//	printf("Memory Allocation Failed\n");
//	return EXIT_FAILURE;
//}
//
//*p = 10;
//printf("Value of p: %d\n", *p);
//free(p);

//	int *myArray = NULL;
//	myArray = (int *)malloc(10*sizeof(int));   instead of making ten
//
//	if (myArray==NULL){
//		printf("Memory Allocation Failed\n");
//		return EXIT_FAILURE;
//	}
//
//	myArray[0]=10;
//
//	printf("Value of first element of array: %d\n", myArray[0]);
//
//	free(myArray);



	Account* accounts = makeAccounts(customers);

	displayAll(&accounts[0]);


	return EXIT_SUCCESS;


}



void setValues(Account *p){
	printf("\nEnter the account number: ");
	scanf("%d", &p->accountNumber);
	printf("Enter the account name: ");
	scanf("%s", &p->name[0]);
	printf("Enter the account balance: ");
	scanf("%f", &p->balance);
}

 void display(Account *p){
		printf("\nAccount information:\n");
		printf("Number: %d\n", p->accountNumber);
		printf("Name: %s\n", p->name);
		printf("Balance: $%.2f\n", p->balance);
}

 void displayAll(Account *p){
	 Account account = *p;
	 int run = 1;
	 while (run) {
		 display(&account);
		 if (account.next == NULL){
			 break;
		 }
		 account = *account.next;
	 }
 }

Account* makeAccounts(int amount){
		Account *accounts = NULL;
		accounts = (Account *)malloc(amount*sizeof(Account));

		if (accounts==NULL){
			printf("Memory Allocation Failed\n");
			return NULL;
		}
		else{

			for(int i = 0; i < amount; i++){
				setValues(&accounts[i]);
				if(i == amount - 1){
					accounts[i].next = NULL;
				}
				else{
					accounts[i].next = &accounts[i+1];
				}
			}
		}
		return accounts;
 }






