#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	int a,b,c;
	float del,s1,s2,s3;
	
	printf("donnez la valeur de a :\n");
	scanf("%d",&a);
	
	printf("donnez la valeur de b :\n");
	scanf("%d",&b);
	
	printf("donnez la valeur de c :\n");
	scanf("%d",&c);
	
	del=(b*b)-(4*a*c);
	
	s1=-b/(2*a);
	s2=(-1*b)- sqrt (del)/(2*a);
	s3=(-1*b)+ sqrt (del)/(2*a);
	  
	if (del<0)
	{
	  	printf("aucune solution");
	}
	      
	else if (del==0)
	{
		printf("une solution %f,s1");
	}
	        
	else if (del>0) 
	{
		printf("deux solutions %f et %f",s2,s3);
	}
	      

	return 0;	    
	        
}
