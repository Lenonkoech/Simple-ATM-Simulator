/*  DEFAULT USERNAME: Myadmin */
/*  DEFAULT PASSWORD: Admin123 */
#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>
 main()
{
 char username[]="Myadmin";
 char password[]="Admin123";
	printf("Enter username:\n");
	scanf("%s",&username);
	printf("Enter password:\n");
	scanf("%s",&password);
	startpage:
if(strcmp(username,"Myadmin")==0)
{
	if(strcmp(password,"Admin123")==0)
	{
printf("\t..........................................\n\tMY ATM SIMULATOR\n\t""""""""""""""""""""""""""ATM SERVICES\n\t1.Check Balance\n\t2.Deposit\n\t3.Withdraw\n\t4.Transfer cash\n\t5.Quit\n\n\t............................................\n");
int balance=1000;
int option;
int deposit;
int withdrawal;
int transfer;
int new_balance;
mainhome:
printf("Choose your option:\t");
scanf("%d",&option);
/*check balance*/
if(option==1)
{
printf("Your balance is\tKsh:%d\n\n",balance);
goto mainhome;	
}
else if (option==2) 
{
	printf("Make a deposit\tksh:");
	scanf("%d",&deposit);
     new_balance=1000+deposit;
	printf("New balance is\tksh%d\n\n",new_balance);
	goto mainhome;		
}
else if(option==3)
{
	printf("Make a withdrawal\tKsh:");
	scanf("%d",&withdrawal);
	new_balance=1000-withdrawal;
	if(withdrawal<1000){
		printf("New balance is\tKsh:%d\n\n");	
	}
	else
	{
		printf("Invalid withdrawl.Max withdrawal is Ksh1000\n");
	}
	goto mainhome;
	}
	else if(option==4)
	{
			printf("Make a Money transfer\tKsh:");
	scanf("%d",&transfer);
	new_balance=1000-transfer;
	if(transfer<1000){
		printf("New balance is\tKsh:%d\n\n");	
	}
	else{
		printf("Inadequate funds to make tranfer\n");
	}
	goto mainhome;
		}	
else if(option==5){
		return 0;
}
else
{
	printf("Invalid Choice\n\n");
}
goto mainhome;
	}
	else
	{
		printf("invalid password");	
	}
}
else
{
	printf("Invalid username");
}
getch();	
}
