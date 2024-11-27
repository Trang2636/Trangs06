#include<stdio.h>
int main (){
	int soLe ;
	int a,b,c,d,e ; 
	int sum=0; 
	
	printf("moi ban nhap vao so nguyen t1:  ") ;
	scanf("%d",&a); 
		printf("moi ban nhap vao so nguyen t2:  ") ;
	scanf("%d",&b); 
		printf("moi ban nhap vao so nguyen t3:  ") ;
	scanf("%d",&c); 
		printf("moi ban nhap vao so nguyen t4:  ") ;
	scanf("%d",&d); 
		printf("moi ban nhap vao so nguyen t5:  ") ;
	scanf("%d",&e); 
	if (a%2 != 0) {
	sum = sum + a ; 
		
	} if (b%2!=0){
		sum = sum +b ; 
		
	} if (c%2 !=0 ){
		sum = sum + c ; 
			
	}  if (d%2!=0){
		sum = sum +d ; 
			
	} if (e%2 !=0 ){
		sum = sum + e ; }
		printf (" tong cua cac so le la : %d ",sum ); 
	
	return 0; 
} 
