#include<stdio.h>
int main()
{
	int Tab[50];
	int i , N ,somme ;
	printf ("Veuillez entrer le nombre de tableau :");
	scanf("%d",&N);
	somme =0;
	for (i=0 ;i< N ;i++ )
{
		printf("Tab[%d] =",i );
		scanf("%d",&Tab[i]);
		somme =somme+Tab[i]; 
}
	printf("Somme = %d" ,somme );
	printf("\n");
	return(0);
}

