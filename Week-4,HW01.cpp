#include<stdio.h>
int main()
{
	int collect,mid,final,sum;
	scanf("%d",&collect);
	scanf("%d",&mid);
	scanf("%d",&final);
	if((collect>=0&&collect<=30)&&(mid>=0&&mid<=30)&&(final>=0&&final<=40)){
		sum=collect+mid+final;
		if(sum>=80&&sum<=100){
			printf("A");	
		}
		else if(sum>=75&&sum<=79){
			printf("B+");
		}
		else if(sum>=70&&sum<=74){
			printf("B");
		}
		else if(sum>=65&&sum<=69){
			printf("C+");
		}
		else if(sum>=60&&sum<=64){
			printf("C");
		}
		else if(sum>=55&&sum<=59){
			printf("D+");
		}
		else if(sum>=50&&sum<=54){
			printf("D");
		}
		else if(sum>=0&&sum<=49){
			printf("F");
		}
	}
	return 0;
}
