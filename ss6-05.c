#include<stdio.h>
int main (){
	int day ,month ,year ;
	printf("moi ban nhap vao nam:  ");
	scanf ("%d",&year); 
	printf("moi ban nhap vao thang:  ");
	scanf ("%d",&month);
	if(year> 0 && month>0 && month <13) {
			}else if (month== 1 || month == 3 || month == 5 || month ==7 || month ==8 || month ==10 || month ==12 ){
				printf (" co 31 ngay "); 
			}else{
				printf ("co 30 ngay "); 
			} 
				
			 if (month ==2 && year %400 ==0 ||year %4==0 && year %100 !=0 ) {
				printf("co 29 ngay "); 
			}else { 
			printf(" co 28 ngay "); 
			} 
	return 0; 
} 
