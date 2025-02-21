#include<stdio.h>

int main()
{
	float note1 , note2 ,moyenne , somme ;
	int coeff1,coeff2;
	printf ("Veuillez entrer la note 1 =");
	scanf ("%f",&note1);
	printf ("Veuillez entrer la note 2 =");
        scanf ("%f",&note2);
	printf ("Veuillez entrer le coefficient 1 =");
	scanf ("%d",&coeff1);
	printf ("Veuillez entrer le coefficient 2 =");
        scanf ("%d",&coeff2);
	somme = note1 + note2 ;
	moyenne = ((note1*coeff1)+(note2*coeff2))/(coeff1+coeff2);
	printf (" somme = %f\n ", somme );
	printf ("moyenne = %f\n ",moyenne );		
	return (0);

}
