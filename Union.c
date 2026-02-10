#include<stdio.h>
union Students{
int rollno;
char name[30];
float marks;
};

int main(){
union Students s1;
printf("Enter name:");
scanf("%s",&s1.name);
printf("%s \t",s1.name);
printf("Size of Union:%zu",sizeof(s1));
return 0;
}