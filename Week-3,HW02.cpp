#include<stdio.h>
int main(){
	int num;
	scanf_s("%d",&num);
	if(num<0){
		printf("Please insert the number that is greater or equal zero");
	}
	if(num>=0){
		if(num>=50){
			printf("Pass");
		}
		else{
		printf("Fail");}
	}
	return 0;
}
