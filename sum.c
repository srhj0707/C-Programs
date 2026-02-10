# include <stdio.h>
#include <conio.h>
int main(){
int a,b,sum;
//Prompt the user to enter the 2 numbers
printf("Enter 2 numbers:\n");
//Take input of the numbers and store them in the desired variables
scanf("%d %d",&a, &b);
//Calculate the sum and store it in the required variable
sum=a+b;
//Print the sum
printf("Sum is %d",sum);
getch();
return 0;  //Executes the program successfully
}