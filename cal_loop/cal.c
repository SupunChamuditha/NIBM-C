#include<stdio.h>
int main(){
	float num1;
	float num2;
	char op;
	float final;
	int i;
	
	for(i=1;i>0;++i){
	printf("Enter First Number	:");
	scanf("%f",&num1);
	printf("Enter Mathematical Operator (+,-,*,/)	:");
	scanf("%s",&op);
	printf("Enter Second Number	:");
	scanf("%f",&num2);
	
	switch(op){
		case '+':
			final=num1+num2;
			printf("Answer is : %f\n\n",final);

			break; 
		case '-':
			final=num1-num2;
			printf("Answer is : %f\n\n",final);
			break; 
		case '*':
			final=num1*num2;
			printf("Answer is : %f\n\n",final);
			break; 
		case '/':
			final=num1/num2;   
			printf("Answer is : %f\n\n",final);
			break; 
		default:
			printf("Invalied Operator\n\n");
			break;		
	}
	}
		
}