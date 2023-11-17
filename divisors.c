#include <stdio.h>
int div(int);
int div(int num){
	int i;
	for(i=1;i<=num;i++){
		if(num%i==0){
			printf("%d\n",i);
		}
	}
}
int main(){ 
    int no;
	printf("enter the no :");
	scanf("%d",&no);
	div(no);	
}
