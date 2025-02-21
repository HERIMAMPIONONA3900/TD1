#include<stdio.h>

int main()
{
	int N , i, D ;
	printf ("Veuillez entrer N = ");
	scanf ("%d",&N);
	for (i=1 ; i<=N ;i++ ){
		D = N%i ;
	if (D==0)
		printf ("%d  " ,i );
}
	printf ("\n");
	return (0);

}
