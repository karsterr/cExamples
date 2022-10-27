#include <stdio.h>

int multiply(int a, int b){
	int c;
	c=a*b;
	return c;}

int main(int argc, const char * argv[]){
	int number1,number2,sum;
	printf("Enter two value for multiplcation : ");
	scanf("%d %d",&number1,&number2);
	sum=multiply(number1,number2);
	printf("Summary of Multiplication : %d\n",sum);
	return 0;}
