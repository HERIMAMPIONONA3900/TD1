#include<stdio.h>

int main()
{
	float S , N ,i,fac ;
	printf ("Veuillez entrer N =");
	scanf("%f", &N );
	S =0 ;
	fac =1 ;
	for ( i=1 ;i<=N ;i++ ){
		fac =  fac * i;
		S = S + (1/fac);
}
	printf ("Somme = %f   \n " ,S );
	return (0);

}
