#include<stdio.h>

#include<stdlib.h>

#include<math.h>

 

 

float F;

float c;

int main()

{

                printf("entrez la temp�rature en fahrenheit ");

                scanf("%f", &F);

                c= (F-32)/1.8;

               

                              

                if ( c <= 0  )

                {

                printf("tr�s froid");

                }

                else if (c>0 && c<=20 )

{

 

                printf("froid");

}

                else if ((c>20) && (c<=30 ))

                {

               

                 printf("chaud");

                }

               

 

                else 

                {

               

                printf("tr�s chaud");

                }
                

return 0;
    }

            
