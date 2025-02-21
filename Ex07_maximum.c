#include<stdio.h>

int main ()
{
	float A ,B,C,max ;
	printf ("Veuillez entrer A = ");
	scanf ("%f", &A);
        printf ("Veuillez entrer B = ");
        scanf ("%f", &B);
        printf ("Veuillez entrer C = ");
        scanf ("%f", &C);
	max = A ;
	if (max>B && max>C )
		max = max;
	else 
		if (B>max && B>C)
			max=B;
		else 
			if (C>max && C>B)
				max = C ;
	printf ("MAXIMUM = %f\n", max);


}
