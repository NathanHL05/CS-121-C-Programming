/*
 ============================================================================
 Name        : week5.c
 Author      : Nathan Larson
 Version     :
 Copyright   : Your copyright notice
 Description : structures
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
Account* makeAccount(Account** head);
void displayAll(Account *p);
Account* findAccount(int account, Account *p);


int main(void) {
	int running = 1;
	int choice;
	Account* head = NULL;
	while(running){
		printf("Main menu:\n");
		printf("\t1. Add account\n");
		printf("\t2. Display all accounts\n");
		printf("\t3. Find account\n");
		printf("\t4. Modify account\n");
		printf("\t0. Quit\n");
		printf("Your choice: ");
		scanf("%d", &choice);

		if(choice == 1){
			makeAccount(&head);
		}
		else if (choice == 2){
			if(head == NULL){
				printf("\nThere are no accounts to display.\n");
			}
			else{
				displayAll(head);
			}

		}
		else if (choice == 3){
			int accountNumber;
			printf("\nEnter the account number to find: ");
			scanf("%d", &accountNumber);
			if(findAccount(accountNumber, head)!= NULL){
				display(findAccount(accountNumber, head));
			}
		}
		else if (choice == 4){
					int accountNumber;
					printf("\nEnter the account number to modify: ");
					scanf("%d", &accountNumber);
					if(findAccount(accountNumber, head) != NULL){
						setValues(findAccount(accountNumber, head));
					}
				}
		else if (choice == 0){
			running = 0;
		}
		else{
			printf("\nYou entered an invalid option.\n");
		}
	}
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

Account* findAccount(int account, Account *p){
	 Account *start = p;
	 while(start->accountNumber != account){
		 if(start->next == NULL){
			 printf("Invalid account number.\n");
			 return NULL;
		 }
		 else{
			 start = start->next;
		 }
	 }
	 return start;
 }

Account* makeAccount(Account** head){
		Account *account = NULL;
		account = (Account *)malloc(sizeof(Account));

		if (account==NULL){
			printf("Memory Allocation Failed\n");
			return NULL;
		}
		else{
			setValues(account);
			account->next = NULL;

			if(*head == NULL){
				*head = account;
			}
			else{
				Account* current = *head;
				while (current->next != NULL) {
					current  = current->next;
				}
			current->next = account;
			}
		}
		return account;
 }






