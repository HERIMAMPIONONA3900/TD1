#include<stdio.h>

int main()
{
	int N,i,P ;
	printf ("Veuillez entrer N =");
	scanf("%d",&N);
	for (i=1 ;i<N ;i++ ){
		P = i%2 ;

	if (P==0)
		printf ("%d   ", i );
}
	 printf ("\n");

	return (0);
}
