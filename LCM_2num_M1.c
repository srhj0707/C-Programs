#include<stdio.h>
int main(){
int a,b,max,num;
printf("Enter two natural numbers:\n");
scanf("%d %d", &a, &b);
max=(a>b)?a:b;
for(int i=0;;i++){
num=max+i;
if(num%a==0 && num%b==0){
break;
}
}
printf("LCM of %d and %d is %d.\n", a, b, num);
return 0;
}