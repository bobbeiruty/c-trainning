#include <stdio.h>

int main()
{
	int x =51;
	int n ;
	printf("enter the number n %d\n");
	scanf("%d",&n);
	int def =(n-x)*-1;
	if(n>x){
		def=(n-x)*3;
	}
	
		printf("%d",def);
		
	}

