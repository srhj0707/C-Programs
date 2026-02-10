#include<stdio.h>
int main(){
int a=0,b=1,c;
int n;
printf("Enter a number of terms:\n");
scanf("%d",&n);
printf("Fibonacci sequence:\n");
if(n==1){
printf("%d\n",a);
}
if(n==2){
printf("%d\n",a);
printf("%d\n",b);
}
if(n>2){
printf("%d\n",a);
printf("%d\n",b);
for(int i=3;i<=n;i++) {
c=a+b;
printf("%d\n",c);
a=b; 
b=c;
}
}
return 0;
}