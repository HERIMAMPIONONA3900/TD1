#include<stdio.h>

int main ()
{
	float S,i,N,fac ;
	printf ("Veuillez entrer N = ");
	scanf ("%f",&N );
	S = 0 ;
	fac = 1 ;
	for (i =1 ;i<=N ;i++){
		fac = fac * i ;
		S = S + fac;
}
	printf ("Somme = %f  " ,S );
	printf ("\n");
	return (0);

}
