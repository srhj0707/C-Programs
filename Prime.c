#include<stdio.h>
int main(){
int a, j;
printf("Enter Natural number: \n");
scanf("%d", &a);
for(int i=2;i<a;i++){
if(a%i!=0){
j=1;
}
else {
j=0;
break;
}
}
if(j==0){
printf("Entered number is not a prime number \n");
}
else if(j==1){
printf("Entered number is a prime number \n");
}
else if(a==2){
printf("Entered number is a prime number \n");
}
else if(a==1){
printf("Entered number is neither prime nor composite number. \n");
}

return 0;
}