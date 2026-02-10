#include<stdio.h>
int main(){
int a,d,n;
int sum=0;
printf("Enter first term:\n");
scanf("%d",&a);
printf("Enter common difference:\n");
scanf("%d",&d);
printf("Enter the number of terms:\n");
scanf("%d",&n);
printf("Required Arithmetic Progression is:\n");
for(int i=0;i<n;i++){
printf("%d ",a+i*d);
sum+=a+i*d;
if(i<n-1){
printf(", ");
} else{
printf("\n");
}
}
printf("Sum of required Arithmetic Progression is: %d\n", sum);
return 0;
}