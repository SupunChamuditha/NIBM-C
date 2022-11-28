#include<stdio.h>
int main(){
	float num1;
	float num2;
	char op;
	float final;
	
	printf("Enter First Number	:");
	scanf("%f",&num1);
	printf("Enter Mathematical Operator (+,-,*,/)	:");
	scanf("%s",&op);
	printf("Enter Second Number	:");
	scanf("%f",&num2);
	
	switch(op){
		case '+':
			final=num1+num2;
			break; 
		case '-':
			final=num1-num2;
			break; 
		case '*':
			final=num1*num2;
			break; 
		case '/':
			final=num1/num2;   
			break; 
		default:
			printf("Invalied Operator\n");
			return 0;
			break;
			
	}
	
	printf("Answer is : %f\n",final);
	return 0;
	
}