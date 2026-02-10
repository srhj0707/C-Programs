#include<stdio.h>
int main(){
int n,rem,num,sum=0;
printf("Enter number:\n");
scanf("%d", &n);
num=n;
do{
rem=n%10;
n=n/10;
sum=sum*10+rem;
} while(n>0);
printf("Reverse Order:\n");
printf("%d\n",sum);
if(num==sum){
printf("%d is a palindrome.\n", num);
}else{
printf("%d is not a palindrome.\n", num);
}
return 0;
}