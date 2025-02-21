#include<stdio.h>
#include<math.h>
int main()
{
	float A,B,C,x1,x2,delta,rdelta ;
	printf ("Veuillez entrer A = ");
	scanf ("%f",&A );
	printf ("Veuillez entrer B = ");
        scanf ("%f",&B );
	printf ("Veuillez entrer C = ");
        scanf ("%f",&C );
	delta = (B*B) -(4*A*C);
	if (delta>0 ){
		rdelta = sqrt (delta);
		x1 = (-B-rdelta)/(2*A);
		x2 = (-B+rdelta)/(2*A);
		printf ("Deux racines distinctes\n");
		printf (" x1 = %f\n x2 = %f\n ", x1 ,x2 );
}
		else 
			if (delta == 0){
				x1 = -B/2*A;
				printf ("Racine double\n");
				printf ("x1=x2=%f\n",x1 );
}
			else 
				if (delta < 0)
					printf ("Pas de solution\n ");
	return (0);

}
