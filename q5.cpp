#include<stdio.h>
int main() {
	int time;
	
	printf("Enter time in 24-hour format\n");
	scanf("%d", &time);
	
	if(time>=6 && time<=11) {
		printf("Good Morning");
	}
	else if(time>=12 && time<=17) {
		printf("Good Afternoon");
	}
	else if(time>=18 && time<=23) {
		printf("Good Evening");
	}
	else if(time>=0 && time<=5) {
		printf("Good Night");
	}
}
