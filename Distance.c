#include<stdio.h>
int main(){
	int km,m,cm,ft,inc;
	printf("enter the distance in km");
	scanf("%d",&km);
	m=km*1000;
	cm=m*100;
	inc=cm/2.54;
    ft=inc/12;	
	printf("distance in km %d\n",km);
	printf("distance in m %d\n",m);
	printf("distance in cm %d\n",cm);
	printf("distance in ft %d\n",ft);
	printf("distance in inc %d\n",inc);
}
