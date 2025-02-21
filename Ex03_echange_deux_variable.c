#include<stdio.h>

int main()
{
	float A , B , C ;
	printf ("Veuillez entrer la valeur de A =");
        scanf ("%f",&A);
        printf ("Veuillez entrer la valeur de B =");
        scanf ("%f",&B);
	C = A;
	A = B ;
	B = C ;
	printf ("A =%f\n " ,A );
	printf ("B =%f\n ", B );
	return (0);
	
}
