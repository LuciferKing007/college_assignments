//Question: Choose any experiment (with finite sample space) and write a program that will
//a) print its sample space;
//b) assuming that all outcomes are equally likely, make a choice of outcome.

//Experiment is Tossing A Coin.
//Sample Space is a set of all possible outcomes of any random experiment.
//Outcomes in a sample space 'S' are equally-likely if each has the same chance/probability of occurrence.
//If a sample space contains a finite number of elements, then the sample space is said to be a finite sample space. The sample space for the experiment of a toss of a coin contains only two possible outcomes, so it is an example of finite sample space.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char chk;
	int i,c=0,n,j;
	
	 printf("sample space: ");
	for(i=0;i<2;i++)
		for(j=0;j<2;j++)
			if(i==0&&j==0)
				printf("(HH,");
			else if(i==0&&j==1)
				printf("HT,");
			else if(i==1&&j==0)
				printf("TH,");
			else if(i==1&&j==1)
				printf("TT)\n");
    
	do{

	if(i==0)
	    { printf("Probability of 0 head (TT)= 1/4\n");
	    }
	else if(i==1)
	    {printf("Probability of atleast 1 head (HT,TH)= 1/2\n");

	    }
    else if(i==2)
	    {
	    printf("Probability of both heads (HH)= 1/4\n");
	    }

	printf("\nWant to have the experiment again? (y/n): ");
	scanf("%s",&chk);
	}while(chk=='y');

return 0;
}
