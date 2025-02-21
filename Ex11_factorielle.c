#include<stdio.h>

int main()
{
	float fac , S , i ,N ;
	printf ("Veuillez entrer N =");
	scanf ("%f", &N );
	S=0 ;
	fac = 1 ;
	for (i=1 ;i<=N ; i++){
		fac= fac * i ;
		S = S + fac ;
}
	printf ("La somme de factorielle est = %f\n " ,S );
	return (0);

}
