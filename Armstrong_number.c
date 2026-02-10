#include<stdio.h>
int main(){
int a,n,num,sum=0,x=1,b;
printf("Enter any whole number from 0 to 1,00,000:\n");
scanf("%d", &num);
b=num;
if(num>=0 && num<10)
n=1;
else if(num>9 && num<100)
n=2;
else if(num>99 && num<1000)
n=3;
else if(num>999 && num<10000)
n=4;
else if(num>9999 && num<100000)
n=5;
do{
x=1;
a=num%10;
num=num/10;
for(int i=1;i<=n;i++){
x=x*a;
}
sum=sum+x;
}while(num>0);
printf("Number obtained by adding each digit raised to the power of no. of digits is:%d\n",sum);
if(sum==b)
printf("%d is an Armstrong number.\n");
else
printf("%d is not an Armstrong number.\n");
return 0;
}