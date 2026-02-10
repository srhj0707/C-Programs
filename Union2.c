#include<stdio.h>
union Time{
int H;
int M;
int S;
} time1,time2;


int main(){
union Time sum;
printf("Enter the seconds in stopwatch time of the 1st trial\n");
scanf("%d",&time1.S);
printf("Enter the seconds in stopwatch time of the 2nd trial\n");
scanf("%d",&time2.S);
sum.S = time1.S + time2.S;
if(sum.S > 59){
	sum.S-=60;
	printf("\nSeconds in the sum of the time records: %d\n\n",sum.S);
	sum=(union Time){0};
	sum.M=1;
}else{
	printf("\nSeconds in the sum of the time records: %d\n\n",sum.S);
	sum=(union Time){0};
}

time1=(union Time){0};
time2=(union Time){0};

printf("Enter the minutes in stopwatch time of the 1st trial\n");
scanf("%d",&time1.M);
printf("Enter the minutes in stopwatch time of the 2nd trial\n");
scanf("%d",&time2.M);

sum.M += time1.M + time2.M;
if(sum.M > 59){
	sum.M-=60;
	printf("\nMinutes in the sum of the time records: %d\n\n",sum.M);
	sum=(union Time){0};	
	sum.H=1;
}else{
	printf("Minutes in the sum of the time records: %d\n\n",sum.M);
	sum=(union Time){0};
}
time1=(union Time){0};
time2=(union Time){0};

printf("Enter the hours in stopwatch time of the 1st trial\n");
scanf("%d",&time1.H);
printf("Enter the hours in stopwatch time of the 2nd trial\n");
scanf("%d",&time2.H);

sum.H += time1.H + time2.H;

printf("\nHours in the sum of the time records: %d\n",sum.H);

return 0;

}