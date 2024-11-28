#include<stdio.h>
int main(){
	int number[5]={1,2,3,4,5};	
	for(int i = 0 ; i < 5 ; i++)
	{
		if(number[i]%2==0)
		{
			number[i]+=3;			
		}
		else
		{
			number[i]+=2;			
		}
		printf("%d" , number[i]);
	}
	return 0 ; 
}
