#include<stdio.h>
int main(){
	int i;
	int c;
	int s;
	int input;
	printf("Ypu can only print odd number of rows of designs\n");
	for(i=1;i>0;i++){
		printf("Input Odd number:");
	scanf("%d",&input);
	if(input%2==0){
		printf("**Invalied Input**\n");
	}else{
		input=(input+1)/2;
		for(c=1;c<=input;c++){
			for(s=1;s<=input-c;s++){
				printf(" ");
			}
			for(i=1;i<=c;i++){
				printf("*");
			}
			for(i=1;i<=c-1;i++){
				printf("*");
			}
			printf("\n");	
		}
		for(c=1;c<=input-1;c++){
			for(s=1;s<=c;s++){
				printf(" ");
			}
			for(i=1;i<=input-c;i++){
				printf("*");
			}
			for(i=1;i<=(input-1)-c;i++){
			printf("*");
			}
			printf("\n");	
		}		
	}
	}		
}