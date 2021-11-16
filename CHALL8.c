#include<stdio.h>
#include<stdlib.h>
 
int main(){
	int nbr ;
	
	printf("entrez un nomber :\n");
	scanf("%d",&nbr);
	
	if (nbr<0)
	{
		printf("le nomber est negatif \n");
		
	}
	
	
      else  if (nbr>0)
    {
        printf("le nombre est positif \n");
    }

      else
    {
        printf("le nombre est egal a zero \n");  
    }
    

    return 0;


}

