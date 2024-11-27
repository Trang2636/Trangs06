#include<stdio.h>
int main (){
	int n=1; 
	for(int n =1; n<101; n++){
	 if(n%3==0 && n%5==0){
	 	printf ("FizzBuzz\n");
		 continue; 
	}else if (n%3==0){
	 	printf("Fizz\n");
		 continue ; 
	 }	else if (n%5==0){
	 	printf("Buzz\n") ;
	 	continue; 
	 } 
	printf ("%d\n",n); 
	} 
	
	
	return 0; 
} 
