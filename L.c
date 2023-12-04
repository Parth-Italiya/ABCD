/*
*
*
*
*
******
*/


#include<stdio.h>
void main ()
{
	int i;
	for(i=1;i<=5;i++){
		if(i==5 ){
			printf("******\n");
		}else if(i==2 || i==3 || i==1 || i==4){
			printf("*\n");
		}
	}
}
