#include<stdio.h>
int main(){
	int num,rem,arm=0,org_no;
	printf("enter the no:");
	scanf("%d",&num);
	org_no=num;
	while(num!=0){
		rem=num%10;
		arm=arm+rem*rem*rem;
		num=num/10;
	} if (org_no==arm){
		printf("no is armstrong");
	}else{
		printf("no is not an armstrong no:");
	}
}
