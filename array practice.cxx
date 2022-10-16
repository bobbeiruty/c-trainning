#include <stdio.h>

int main()
{
	int i,sum,max,min;
	int arr[10];
	printf("enter the array elements: %d");
	for (i=0;i<10;i++){
		
		
		scanf("%d",&arr[i]);
		
		
		}
		sum=0;
		max=arr[0];
		min=arr[0];
		
		for (i=0;i<10;i++){
			
			if(arr[i]>max){
			
			max=arr[i];
			
			}
			if(arr[i]<min){
				
				
				min=arr[i];
			}
			
			sum+=arr[i];
		}
		printf("the maximum number is:%d\n",max);
		printf("the  minimum number is:%d\n",min);
		printf("the sum of numbers is:%d\n",sum);
}
