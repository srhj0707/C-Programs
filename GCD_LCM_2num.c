#include<stdio.h>
int main(){
int a,b,min,num;
printf("Enter two natural numbers:\n");
scanf("%d %d", &a, &b);
min=(a<b)?a:b;
for(int i=0;;i++){
num=min-i;
if(a%num==0 && b%num==0){
break;
}
}
printf("GCD of %d and %d is %d.\n", a, b, num);
printf("LCM of %d and %d is %d.\n", a, b, a*b/num);
return 0;
}