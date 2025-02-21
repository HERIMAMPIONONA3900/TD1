#include<stdio.h>

int main()
{
	float N ;
	printf ("Veuillez entrer le nombre = ");
	scanf ("%f", &N);
	if (N > 0 )
		printf ("POSITIF\n");
	else 
		if (N < 0 )
			printf ("NEGATIF\n");
	else 
		if (N == 0 )
			printf ("NEUTRE\n");
	return (0);

}
