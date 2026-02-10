#include<stdio.h>
int main(){
int a,d,n;
printf("Enter first term:\n");
scanf("%d",&a);
printf("Enter common difference:\n");
scanf("%d",&d);
printf("Enter the number of terms:\n");
scanf("%d",&n);
printf("Required Arithmetic Progression is:\n");
for(int i=0;i<=n-1;i++){
printf("%d",a+i*d);
if(i<n-1){
printf(", ");
}
}
return 0;
}