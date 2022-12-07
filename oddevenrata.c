#include<stdio.h>
int main(){
	int i;
	int c;
	int s;
	int r;	
	printf("Input A number: ");
	scanf("%d",&i);

	if(i%2==0){
		i=i/2;
		
		for(s=1;s<=(2*i);s++){
			printf("*");
		}
		printf("\n");
		for(c=1;c<=i-1;c++){
		
				printf("*");
	
			for(r=1;r<=(c-1);r++){
				printf(" ");
			}
		
				printf("*");
	
			for(r=1;r<=((i-c)*2)-2;r++){
				printf(" ");
			}
	
				printf("*");

			for(r=1;r<=(c-1);r++){
				printf(" ");
			}

				printf("*");

			
			printf("\n");
		
		}
		for(c=1;c<=i-1;c++){

				printf("*");

			for(r=1;r<=(i-(c+1));r++){
				printf(" ");
			}

				printf("*");

			for(r=1;r<=(c*2)-2;r++){
				printf(" ");
			}

				printf("*");

			for(r=1;r<=(i-(c+1));r++){
				printf(" ");
			}

				printf("*");
					
			printf("\n");
		
		}
		for(s=1;s<=(2*i);s++){
				printf("*");
			}
			printf("\n");
	
	
	
		printf("\n");
		
		return 0;
	}
	

		i=(i-1)/2;
	for(s=1;s<=(2*i)+1;s++){
			printf("*");
		}
		printf("\n");
	for(c=1;c<=i-1;c++){

			printf("*");

		for(r=1;r<=(c-1);r++){
			printf(" ");
		}

			printf("*");

		for(r=1;r<=((i-c)*2)-1;r++){
			printf(" ");
		}

			printf("*");

		for(r=1;r<=(c-1);r++){
			printf(" ");
		}

			printf("*");

		
		printf("\n");
		
	}
	for(c=1;c<=1;c++){

			printf("*");

		for(r=1;r<=i-1;r++){
			printf(" ");
		}
	
			printf("*");

		for(r=1;r<=(i-1);r++){
			printf(" ");
		}

			printf("*");


		printf("\n");
		
	}
	for(c=1;c<=i-1;c++){

			printf("*");

		for(r=1;r<=(i-(c+1));r++){
			printf(" ");
		}

			printf("*");

		for(r=1;r<=(c*2)-1;r++){
			printf(" ");
		}

			printf("*");

		for(r=1;r<=(i-(c+1));r++){
			printf(" ");
		}

			printf("*");

		
		printf("\n");
		
	}
	for(s=1;s<=(2*i)+1;s++){
			printf("*");
		}
		printf("\n");
	
	
	
	printf("\n");
}