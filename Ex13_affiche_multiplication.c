#include<stdio.h>

int main()
{
	float N ,M ,i ;
	printf ("Veuillez entrer N =");
	scanf("%f", &N );
	M = 1 ;
	for ( i=1 ; i<=N ;i++ )
		M = M* i;
	printf ("La multiplication = %f\n " ,M );
	return (0);

}
