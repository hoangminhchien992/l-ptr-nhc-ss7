#include<stdio.h>
int main(void){
	int num[5]={1 , 3 , 5 , 7 , 9 } , chan = 0 ;
	for(int i = 0 ; i < sizeof(num)/sizeof(int) ; i++)
	{
		if(num[i]%2==0)
		{
			printf("%d" , num[i]);
			chan++;
		}
	}
	if(chan==0)
	{
		printf("khong co so chan");
	}	
	return 0 ; 
}
