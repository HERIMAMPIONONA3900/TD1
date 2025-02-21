#include<stdio.h>

int main()
{
	float S , N , i ;
	printf ("Veuillez entrer N = ");
	scanf ("%f", &N );
	S =0 ;
	for (i = 1 ;i <= N ;i++ )
		S = S + (1/i);
	printf ("Somme = %f " ,S );
	return (0);

}
