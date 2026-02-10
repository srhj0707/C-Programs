#include<stdio.h>
int main(){
printf("Enter number:\n");
int n, sum=0;
scanf("%d", &n);
for(int i=1;i<=n;i++){
sum += i;
}
printf("Sum of given no. of natural numbers is %d.\n", sum);

return 0;
}