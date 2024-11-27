#include <stdio.h>
int main (){
	int a,b,c,d,e  ; 
	int soChan =0;
	int soLe =0; 
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
	if (a%2==0 ){
		soChan++;  
	} else {
		soLe++;
	}
		if (b%2==0 ){
		soChan++; 
	} else {
		soLe++;
	}
	
		if (c%2==0 ){
		soChan++; 
	} else {
		soLe++;
	}
		if (d%2==0 ){
		soChan++; 
	} else {
		soLe++;
	}
	
		if (e%2==0 ){
		soChan++; 
	} else {
		soLe++; 
	}
	printf("so cac so chan la: %d\n",soChan) ;
	printf("so cac so le la : %d ",soLe); 
	
	 
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0; 
} 
