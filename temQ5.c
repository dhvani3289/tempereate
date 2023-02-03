#include<stdio.h>
main(){

    int i=1;
    int n,fact=1;
    
    printf("Enter a number : ");
    scanf("%d",&n);
    
     do{
     	fact=fact*i;
    	i++;
	}while(i<=n);
	
	printf("%d\n",fact);
}
	
