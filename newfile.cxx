 #include<stdio.h>

int main(){
    int i,sum,max,min;
   
    
    
    int ara[100];
    
     printf("Enter arq nukbers:\n");
     for(i = 0; i < 100;  i++){
      scanf("%d", &ara[i]);
      if (ara[i]>0){
        
       continue ;}else{break;}
        
        	
        	
        
     }
     
   
    
    sum=0;
    max=ara[0];
    min=ara[0];
    for(i = 0; i < 100; i++){
    	    printf("Your  ara numbers are %d\n",ara[i]);
    
        sum+=ara[i];
        if(ara[i] > max){
            max = ara[i];
        }
        if(ara[i] < min){
            min = ara[i];
        }
    }
    
    
    printf("Sum is %d\n",sum);
   
    printf("Max number is %d\n",max);
    printf("Min number is %d\n",min);
    
    
    
    
    }