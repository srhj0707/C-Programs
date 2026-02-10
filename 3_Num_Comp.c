#include<stdio.h>
int main(){
int a,b,c;
printf("Enter three integers:\n");
scanf("%d %d %d", &a, &b, &c);
if(a<b && c<b)
printf("%d is the largest.\n", b);
else if(a<c && b<c)
printf("%d is the largest.\n", c);
else if (b<a && c<a)
printf("%d is the largest.\n", a);
else if (a==b && c<a)
printf("%d and %d are greater and equal.\n", a, b);
else if (a==b && a<c)
printf("%d is the largest.\n", c);
else if (b==c && c<a)
printf("%d is the largest.\n", a);
else if (b==c && a<c)
printf("%d and %d are greater and equal.\n", b , c);
else if (c==a && b<c)
printf("%d and %d are greater and equal.\n", a, c);
else if (c==a && c<b)
printf("%d is the largest.\n", b);
else if (a==b && b==c)
printf("All are equal.\n");

return 0;
}