#include<stdio.h>
main(){

    int n,f,l,sum=0;
    
    printf("Enter a number : ");
    scanf("%d",&n);
    
    l=n%10;
    printf("Last number is %d\n",l);
    
    while(n>10){
    	
    	n=n/10;
   	}
    f = n;
    sum=f+l;
    printf("sum = %d",sum);
}
