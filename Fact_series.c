#include<stdio.h>
int main(){
int n,i; float fact=1; float sum=1;
printf("Enter number:\n");
scanf("%d", &n);
for(float j=1;j<=n;j++){
fact=1;
for(i=1;i<=j;i++){
fact=fact*i;
}
sum+=j/fact;
}
printf("Sum of series is %f", sum);
return 0;
}