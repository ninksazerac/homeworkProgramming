#include<stdio.h>
int main()
{
	int num;
	scanf_s("%d",&num);
	if(num<0){
		printf("Please insert the number that is greater or equal zero");
	}
	if(num>=0){
		if(num>=80){
			printf("A");
		}
		else if(num<80){
			if(num>=70){
				printf("B");
			}
			else if(num<70){
				if(num>=60){
					printf("C");
				}
				else if(num<60){
					if(num>=50){
						printf("D");
					}
					else if(num<50){
						printf("F");
					}
				}
			}
		}
	}
	return 0;
}
