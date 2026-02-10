# include <stdio.h>
int main(){
int num;
//Prompt the user to enter the 2 numbers
printf("Enter number:\n");
//Take input of the numbers and store them in the desired variables
scanf("%d",&num);
if(num%2==0 && num>0){
printf("%d is even\n",num);
}
else if (num%2!=0) {
printf("%d is odd\n",num);
}
else{
printf("Given number is not a natural number.\n");
}

return 0;  //Executes the program successfully
}