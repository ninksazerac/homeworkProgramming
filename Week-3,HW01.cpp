#include<stdio.h>
int main()
{
	int grade;
	scanf_s("%d",&grade);
	if(grade>=80&&grade<=100){
		printf("A");
	}
	else if(grade>=75&&grade<80){
		printf("B+");	
	}
	else if(grade>=70&&grade<75){
		printf("B");	
	}
	else if(grade>=65&&grade<70){
		printf("C+");	
	}
	else if(grade>=60&&grade<65){
		printf("C");	
	}
	else if(grade>=55&&grade<60){
		printf("D+");	
	}
	else if(grade>=50&&grade<55){
		printf("D");	
	}
	else if(grade>=0&&grade<50){
		printf("F");	
	}
	return 0;
}
