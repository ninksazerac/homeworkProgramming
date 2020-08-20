#include<stdio.h>
int main()
{
	char fname[40], surname[40], gender[10], age[3];
	printf("Enter first name : ");
	scanf("%s", &fname);
	printf("Enter surname : ");
	scanf("%s", &surname);
	printf("Enter gender : ");
	scanf("%s", &gender);
	printf("Enter age : ");
	scanf("%s", &age);
	printf("\nFirst Name : %s\n", fname);
	printf("Surname : %s\n", surname);
	printf("Gender : %s\n", gender);
	printf("Age : %s", age);
	return 0;
}
