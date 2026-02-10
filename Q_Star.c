#include<stdio.h>
int main(){
int l,b;
printf("Displays star pattern of size LxB \n Enter L & B respectively:");
scanf("%d %d", &l, &b);
char star='*';
for(int i=1;i<=l*b;i++){
printf("%c", star);
if(i%l==0){
printf("\n");
}
}

return 0;
}