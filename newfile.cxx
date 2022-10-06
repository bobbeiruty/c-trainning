#include <stdio.h>

int main()
{
	int n  ;
	
		printf ("enter the number ");
	scanf("%d",&n);
	
			
	if (n==0)
		return 1 ;
		int count;
		
		
		while (n!=0){
		n=n/10;
			count++;
		}
		int sum;
		int r ;
		while (n>0){
			n=n/10;
			r=n%10;
			
			sum= sum+r;
			
			
		}
		
		printf("the number is %d",count);
		printf("the sum is %d",sum);

}
