#include<stdio.h>
int main(){
int n,rem,number;
printf("Enter number:\n");
scanf("%d", &n);
printf("Consequently adding the digits of %d is:\n", n);
number=n;
int sum;
num:
sum=0;
do{
rem=n%10;
n=n/10;
sum+=rem;
} while(n>0);
printf("%d\n",sum);
if(sum>9){
n=sum;
goto num;
}
printf("Final sum of digits in %d is: %d", number,sum);
return 0;
}