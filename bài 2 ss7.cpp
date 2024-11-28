#include<stdio.h>
int main(){
	int x[5];
	for(int i = 0 ; i <  5 ; i++)
	{
		printf("Moi ban nhap so thu %d\n : " , i);
		scanf("%d\n" , &x[i]);
	}
	printf("Duyet cac phan tu trong mang\n : ");
	for(int i = 0 ; i < 5 ; i++ )
	{
		printf("%d, " , x[i]);
	}
	return 0 ; 	
}	
