#include <stdio.h>
int main(){
char star='*';
int n;
printf("Displays Triangular Star pattern \nEnter height of pattern:");
scanf("%d", &n);
for(int i=1;i<=n;i++){
for(int j=1;j<=i; j++){
printf("%c", star);
if(j==i){
printf("\n");
}
}
}
return 0;
}