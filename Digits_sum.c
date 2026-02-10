#include<stdio.h>
int main(){
int n,sum=0;
printf("Enter number:\n");
scanf("%d", &n);
printf("Sum of digits of %d is:\n", n);
do{
sum+=n%10;
n=n/10;
} while(n>0);
printf("%d \n", sum);
return 0;
}