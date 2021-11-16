#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int myn;
	
	printf("entrez la moyenne :\n");
	scanf("%d",&myn);
	
	if(myn<10)
         {
        printf("pas de mention  \n");
    }

    else if (  myn  <12 )
    {
        printf("la mention est Passable \n");
    }

    else if ( myn < 14)
    {
        printf("la mention est Assez bien \n");
    }

    else if ( myn < 16)
    {
        printf("la mention est Bien \n");
    }

     else 
    {
        printf("la mention est Tres bien \n");
    }
    

    return 0;
}
