#include<stdio.h>
int main(void){
	int number ;
	printf("Moi nhap so phan tu trong mang :");
	scanf("%d" , &number);
	int arr[number];
	for(int i = 0 ; i < number ; i++)
	{
		printf("Moi ban nhap phan tu thu %d\n :" ,i+1);
		scanf("%d" , &arr[i]);		
	}
	return 0 ; 
}
