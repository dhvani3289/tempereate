#include<stdio.h>
main(){

    int n,c=0;
    
    printf("Enter a number : ");
    scanf("%d",&n);
    
    while(n!=0){
    	n=n/10;
    	c++;
	}
	 printf("the count of digits is = %d",c);
}
