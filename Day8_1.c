#include<stdio.h>
main(){
	int a,b;
	printf("Enter value of A : ");
	scanf("%d",&a);
	printf("Enter value of B : ");
	scanf("%d",&b);
	if(a<b){
		printf("A is Min\nB is Max");
	}
	else {
		printf("A is Max\nB is Min");
	}
}
