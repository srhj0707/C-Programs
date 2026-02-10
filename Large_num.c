#include <stdio.h>
int main(){
int num1,num2;
printf("Enter num1 and num2:");
scanf("%d %d",&num1, &num2);
if(num1 > num2){
printf("%d is largest.",num1);
}
else if (num2>num1){
printf("%d is largest.",num2);
}
else{
printf("Both the numbers are equal.");
}
return 0;
}