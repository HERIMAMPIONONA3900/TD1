#include<stdio.h>
#include<math.h>
int main()
{
	float N ,S,i;
	printf ("Veuillez entrer N =");
	scanf("%f",&N );
	S =1;
	for (i=1 ;i<=N ;i++ )
		S = S + pow(10,i);
	printf ("Somme = %f  ", S );
	return (0);
}
