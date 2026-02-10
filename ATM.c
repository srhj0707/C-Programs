#include<stdio.h>
int main(){

int pin=1824;
int amount=100000;

int usernum,deposit,withdrawal,newpin,temp,choice;

printf("---Enter your PIN---:\t");
scanf("%d",&usernum);

if(usernum != pin){
	printf("Invalid PIN!.. Try Again\n");
	return 0;
}

do {
printf("\n1. Deposit\n");
printf("2. Withdrawal\n");
printf("3. Change PIN\n");
printf("4. Balance Check\n");
printf("5. Exit\n");
printf("----Enter Your Choice----\n");
scanf("%d",&choice);

switch(choice) {

	case 1:
		printf("Enter the money to be deposited:\n");
		scanf("%d",&deposit);
		if(deposit>0) {
		amount+=deposit;
		printf("Deposit Successful. \nAvailable balance: %d",amount);
		}
		else{
		printf("---Invalid deposit!---");
		}
		break;

	case 2:
		printf("Enter the money to be withdraw: \n");
		scanf("%d",&withdrawal);
		if(amount>=withdrawal){
		amount-=withdrawal;
		printf("Collect the amount! \n Avalable balance: %d",amount);
		}
		else{
		printf("---Insufficient balance!---");
		}
		break;

	case 3:
		printf("Enter Current PIN:");
		scanf("%d",&temp);
		if(temp!=pin){
			printf("Invalid PIN!");
			return 0;
		}
		printf("Enter new PIN:\n");
		scanf("%d",&pin);
		printf("---PIN changed successfully!---");
		break;

	case 4:
		printf("Available Balance: %d",amount);
		break;
	
	case 5:
		printf("Exit Successful! Thank U, Visit Again ;-) ");
		break;
	default:
		printf("---Invalid Choice!---");
	}
   } while (choice != 5);

return 0;
}