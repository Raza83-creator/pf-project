#include<stdio.h>
int main()
{
	int x,y,z;
	printf("Enter valur of x");
	scanf("%d", &x);
	printf("Enter value of y");
	scanf("%d", &y);
	printf("Enter valur of z");
	scanf("%d", &z);
	if(x>y){
		if(x>z){
			printf("The largest number is of x=%d",x);
		}
		else{
			printf("The largest value is of z = %d", z);
		}		
	}
	else{ 
	     if(y>z){
	     	printf("The largest number is of y = %d", y);
		 }
	}
}