#include <stdio.h>
int main() {
int a=0,b=1,c,n,i;
printf("Enter number:");
scanf("%d",&n);
printf("Fibonacci series:\n");
for(i=1;i<=n; i++){                  //++i & i++ somehow give same output
printf("%d\n", a);
c=a+b;
a=b;
b=c;
}
    return 0;
}