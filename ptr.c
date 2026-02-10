#include <stdio.h>
int main(){
int x=22;
int* ptr=&x;
printf("%p\n",ptr);
printf("%p\n",&x);
printf("%d\n",x);
printf("%d\n",*ptr);
return 0;
}