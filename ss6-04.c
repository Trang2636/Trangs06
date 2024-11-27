#include<stdio.h>
#include <math.h> 
int main (){
	int a,b,c  ;
	float x_1 ,x_2 , x , nghiemKep , delta; 
	
	printf (" moi nhap vao he so a cua pt bac 2:  ");
	scanf ("%d",&a); 
		printf (" moi nhap vao he so b cua pt bac 2:  ");
	scanf ("%d",&b); 
		printf (" moi nhap vao he so c cua pt bac 2:  ");
	scanf ("%d",&c); 
	 printf ("pt bac 2 cua ban la : %dx^2 + %dx + %d =0\n",a,b,c); 
	 
	 //a = 0 thi nghiem la x = -c/b
	 //a  khac 0 thi xet  3 th cua delta 
	 //a =0 va b=0 thi xet c , neu c = 0 thi vsn , neu c khac 0 thi pt vn  
	   if (a==0){
	   	x= -c/b ; 
	   	printf ("nghiem cua pt la %f",x); 	
	   } 
	 if (a==0 && b ==0){
	 	if (c==0){
	 		printf ("pt vo nghiem "); 
		 }else {
		 	printf ("pt vo nghiem "); 
		 } 
	 } 
	if (a!=0){
		delta = b*b- 4*a*c ;
		if (delta==0 ){
			nghiemKep = -b / 2*a ;
			printf ("pt co nghiem kep la %f",nghiemKep); 
		} 
		if ( delta > 0){
			x_1 = -b + sqrt(delta )/ 2*a;
			x_2= -b - sqrt(delta )/ 2*a;
			printf("2 nghiem cua pt la %f va %f",x_1 ,x_2);
			 
		} 
		if (delta <0 ){
			printf ("phuong trinh vo nghiem"); 
		} 
	} 
	
	return 0; 
} 
