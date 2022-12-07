#include<stdio.h>
int main(){
	int i;
	int c;
	int s;
	int r;	
	printf("Input A number: ");
	scanf("%d",&i);
	for(c=1;c<=i-1;c++){
		for(s=1;s<=c-1;s++){
			printf(" ");
		}
		for(r=1;r<=1;r++){
			printf("*");
		}
		for(s=1;s<=((i-c)*2)-1;s++){
			printf(" ");
		}
		for(r=1;r<=1;r++){
			printf("*");
		}
		printf("\n");
	}
		for(s=1;s<=i-1;s++){
			printf(" ");
		}
		printf("*"); //meda tharuwa
		printf("\n");
	for(c=1;c<=i-1;c++){
		for(s=1;s<=i-(c+1);s++){
			printf(" ");
		}
		for(r=1;r<=1;r++){
			printf("*");
		}
		for(s=1;s<=c*2-1;s++){
			printf(" ");
		}
		for(r=1;r<=1;r++){
			printf("*");
		}
		printf("\n");
	}
	printf("\n");
}