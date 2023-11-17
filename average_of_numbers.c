#include<stdio.h>
int average(int [],int);
int main(){
	int marks[]={85,75,96,74,65};
	int size=sizeof(marks)/sizeof(marks[0]);
	int avg=average(marks,size);
	printf("%d",avg);	
}
int average(int marks[],int s){
	int sum=0,avrg,i;
	for(i=0;i<s;i++){
		sum=sum+marks[i];
	}
	avrg=sum/s;
	return avrg;
}

