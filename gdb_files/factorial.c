# include <stdio.h>

int helper(int x){
	return x*x;
}

int main()
{
	int i, num, j=1;
	printf ("Enter the number: ");
	scanf ("%d", &num );

	for (i=1; i<=num; i++)
		j=j*i;    

	int b=helper(j);
	printf("the square is %d",b);
	printf("The factorial of %d is %d\n",num,j);
}