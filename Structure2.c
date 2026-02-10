#include<stdio.h>
struct Time{
int H;
int M;
int S;
} time1,time2;


int main(){
struct Time sum = {.H=0,.M=0,.S=0};
printf("Enter the stopwatch time of the 1st trial.\nFollow the format: hh mm ss (24hr system)\n");
scanf("%d %d %d",&time1.H,&time1.M,&time1.S);
printf("Enter the stopwatch time of the 2nd trial.\nFollow the format: hh mm ss (24hr system)\n");
scanf("%d %d %d",&time2.H,&time2.M,&time2.S);
sum.S = time1.S + time2.S;
if(sum.S > 59){
	sum.S-=60;
	sum.M+=1;
}
sum.M += time1.M + time2.M;
if(sum.M > 59){
	sum.M-=60;
	sum.H+=1;
}
sum.H += time1.H + time2.H;

printf("Sum of the time records entered: %d hr %d min %d sec",sum.H,sum.M,sum.S);

return 0;

}