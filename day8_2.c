#include<stdio.h>
main(){
	int a;
	printf("Enter A : ");
	scanf("%d",&a);
	if(a<0){printf("Number is Negative");
	}
	else if(a>0){printf("Number is Positive");
	}
	else{printf("Number is Neutral"); 
	}
}
