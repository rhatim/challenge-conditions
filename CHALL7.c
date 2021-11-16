#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{ 
int annee,mois,jours,heures,minutes,secondes ;

  printf(" la conversion d'une annee  :\n ");
  printf("1.mois \n");
  printf("2.jours \n");
  printf("3.heures \n");
  printf("4.minutes \n");
  printf("5.secondes \n");
  scanf("%d",&annee);

  
  switch (annee)
  {
  	case 1:
  		{
  		 printf("12mois");
		  break;
  }
  	case 2:
  		{
  		 printf("365 jours");
		  break;
  }
  	case 3:
  		{
  		 printf("8760 heurs");
  		 break;		 		  
  }
  	case 4:
  		{
  		 printf("525600 minutes"); 
  		 break;
  }
  	case 5:
  		{
  		 printf("31536000 secondes"); 
  		 break;
  }
     
     defalut :
     	break;
     	
     }
  
	return 0;
}
