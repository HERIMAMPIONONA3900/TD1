#include<stdio.h>

int main()
{
	int  D,A,r ;
	printf ("Veuillez entrer A =");
	scanf ("%d",&A );
	printf ("Veuillez entrer D =");
        scanf ("%d",&D );
	r = 1 ;
	while (r!=0) 
{
        r = A%D; 
	A=D;
	D=r;
}
	printf ("pgcd = %d\n  " ,A);
	return(0);

}
