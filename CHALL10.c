#include<stdio.h>
#include<stdlib.h>

int main(){
	int tmprt;
	
	printf("donnez la temperature :\n");
	scanf("%d",&tmprt);
	
	if (tmprt<=0)
	{
		printf("glace");
	
	}
	else if (tmprt<=100)
	{
		printf("eau :\n");
	}
	else
	{
		printf("vapeur :\n");	
	}
	
	return 0;
	
}
