#include<stdio.h>
int main(){
	float tienGoc ,tienLai, lai ;
	int soThang ;
	printf("moi ban nhap vao so tien goc :  ");
	 scanf("%f",&tienGoc) ;
	 printf("moi ban nhap vao so tien lai theo nam (%):  ");
	 scanf("%f",&lai) ;
	 printf("moi ban nhap vao so thang gui :  ");
	 scanf("%f",&soThang) ;
	 tienLai =  tienGoc * lai /12 * soThang ;
	 printf("%f",tienLai); 
	 
	 
	
	return 0; 
} 
