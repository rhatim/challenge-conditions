#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(){
	int nbr;
	printf("donner un entier : ");
	scanf("%d",&nbr);
	if(nbr<0) { 
	printf("le nbr  est negatif");
	}else if (nbr>0){
			printf("le nbr  est positif" );
	}else
	printf("le nbr est nul");
	
	




	return 0;
}
