#include<stdio.h>
struct Students{
int rollno;
char name[30];
float marks;
};

int main(){
struct Students s1;
printf("Enter the roll number:");
scanf("%d",&s1.rollno);
printf("Enter name:");
scanf("%s",&s1.name);
printf("Enter the marks:");
scanf("%f",&s1.marks);
printf("%d \t%s \t%f\t",s1.rollno,s1.name,s1.marks);
printf("Size of Structure:%zu",sizeof(s1));
return 0;
}