#include<stdio.h>
//BMI 
int main(){
float h,w,BMI;
printf("enter the height");
scanf("%f",&h);
printf("enter the weight");
scanf("%f",&w);
BMI=w/(h*h);
printf("%f",BMI);
if(BMI<15){
	printf("starvation");
}else if(BMI>=15.1 && BMI<=17.5){
	printf("anorexic");
}else if(BMI>=17.6 && BMI<=18.5){
	printf("underweight");
}else if(BMI>=18.6 && BMI<=24.9){
	printf("ideal");
}else if(BMI>=25.0 && BMI<=25.9){
	printf("overweight");
}else if(BMI>=30.0 && BMI<=30.9){
	printf("obese");
}else{
	printf("morbidly obese");
}
}
