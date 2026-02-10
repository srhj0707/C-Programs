#include<stdio.h>
int main(){
int n, sqsum=0;
printf("Enter number:\n");
scanf("%d", &n);
for(int i=1;i<=n;i++){
sqsum += i*i;
}
printf("Sum of squares of given no. of natural numbers is %d.\n", sqsum);

return 0;
}