#include<stdio.h>
int main(){
	int n,j ;
	printf("moi ban nhap vao so nguyen duong:  ");
	scanf ("%d",&n);
	for(j=1;j<=n; j++){
	 if (n%j ==0){
	 	printf("%d\n",j); 
	 } 
	} 
	
	return 0; 
} 
