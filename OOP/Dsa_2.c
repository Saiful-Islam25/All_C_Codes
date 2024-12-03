#include<stdio.h>
#include<stdlib.h>

int main(){
	float depreciation,pur_price,sal_value,yr_of_service;
	
	printf("Enter the value of depreciation: ");
	scanf("%f",&depreciation);
	printf("Enter the value of pur_price: ");
	scanf("%f",&pur_price);
	printf("Enter the value of yr_of_service: ");
	scanf("%f",&yr_of_service);
	
	sal_value=pur_price-(depreciation*yr_of_service);
	printf("The salvage value is: %.2f",sal_value);
	
	return 0;
}
