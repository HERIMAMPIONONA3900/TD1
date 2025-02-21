#include<stdio.h>

int main()
{
	float A ,B ;
	printf ("Veuillez entrer le nombre 1 =");
	scanf ("%f", &A );
	printf ("Veuillez entrer le nombre 2 =");
        scanf ("%f", &B );
	if (A > 0 && B > 0 || A < 0 && B < 0)
		printf ("PRODUIT POSITIF\n");
	else 
		if ( A > 0 && B < 0 || A < 0 && B > 0 )
			printf ("PRODUIT NEGATIF\n");
	else 
		if (A == 0 || B == 0 )
			printf ("NEUTRE");
	return (0);


}
