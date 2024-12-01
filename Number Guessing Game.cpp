#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int r,g;
	int no_of_g=0; 
	char name[20];
	srand(time(NULL));
	printf("***************************************WELCOME TO THE WORLD OF GUESSING NUMBER`S***************************************\n");
	printf("Please enter your name \n");
	scanf("%s",name);
	
	r=rand()%100+1; 
	
	
	do{
		printf("Please enter your Gusse number between(1 to 100)\n");
		scanf("%d",&g);
		if (g<r)
		{
			printf("Gusse larger number. \n");
			no_of_g++;
		}
		else if(g>r)
		 {
		 	printf("Gusse smaller number. \n");
		 	no_of_g++;
		}
		else
		{
			printf(" congras !!!  You have successfully gussed the number in %d attempts \n",no_of_g);
		}
		
	} while(g!=r);
	printf("\n Bye Bye, Thanks for Playing.");
}
