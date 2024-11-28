#include<stdio.h>	
int main(){
	int x[6]={1,2,3,4,5,7} , doDai;
	for(int i = 0 ; i < 5  ; i++)
	{
		printf("%d\n" , x[i]);
	}
	do_dai=sizeof(x)/sizeof(int);
	printf("Do dai cua mang la :%d" , doDai);
}
