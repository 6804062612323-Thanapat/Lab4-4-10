#include <stdio.h>

int main()
{
int score;
int n,i;
scanf("%d",&n);

for (i=0 ; i <= n ; i++) {

    scanf("%d",&score);

    if (score <= 100 && score >= 0 )	{
        if (score >= 68) {
	        if (score >= 85)
		        printf("%d(A)\n",score);
	        else if (score >= 75)
		        printf("%d(b)\n",score);
	        else 
		        printf("%d(C)\nneed  %d score to B\n",score,75-score); //bonus 1
		
    } 
    else {
	    if (score >= 55)
		    printf("%d(D)\n",score);
	    else 
		    printf("%d(E)\n",score);
    }
}
else { //bonus 2
	printf("error score");
}
}

	
}





