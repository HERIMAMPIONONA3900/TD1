#include<stdio.h>

int main()
{
	float N ,S,i ;
	printf ("Veuillez entrer N =");
	scanf ("%f", &N);
	S = 0;
	for ( i=1 ;i<=N ;i++)
		S = S+i;
	printf ("Somme = %f\n ",S );
	return (0);
 

}
