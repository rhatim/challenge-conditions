#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a,b,s,m;
	
	printf("entrez a :\n");
	scanf("%d",&a);
	
	printf("entrez b : \n");
	scanf("%d",&b);
	
	s= a+b;
	m=a-b;
	if (m==0)
     printf("%d",s*3);
     else
     printf("%d",s);
     
     return 0;
    

}
