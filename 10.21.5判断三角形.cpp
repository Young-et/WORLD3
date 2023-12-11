#include <stdio.h>
#include <math.h>
void typeoff(int b,int c,int d);
int a[11];
int main(){
	int i;
	for(i=1;i<=10;i++){
		scanf("%d",&a[i]);
	}
	printf("Question 1:\n");
	typeoff(1,5,9);
		printf("Question 2:\n");
	typeoff(2,7,10);
		printf("Question 3:\n");
	typeoff(2,3,6);
		printf("Question 4:\n");
	typeoff(8,9,10);
		printf("Question 5:\n");
	typeoff(6,7,10);
		printf("Question 6:\n");
	typeoff(3,4,8);
		printf("Question 7:\n");
	typeoff(1,2,6);
}
void typeoff(int b,int c,int d){
	int max=a[b],m=b;
	if(max<a[c]){
		max=a[c];
		m=c;
	}
	if(max<a[d]){
	max=a[d];
	m=d;
    }
    if((a[b]+a[c]>a[d])&&(a[b]+a[d]>a[c])&&(a[d]+a[c]>a[b])){
    if(a[b]*a[b]+a[c]*a[c]+a[d]*a[d]==2*max*max){
    	printf("right triangle\n");
	}
	else if(a[b]*a[b]+a[c]*a[c]+a[d]*a[d]>2*max*max){
    	printf("acute triangle\n");
	}
	else {
    	printf("obtuse triangle\n");
	}
	if(a[b]==a[c]&&a[b]==a[d]){
		printf("equilateral triangle\n");
	}
	else if(a[b]==a[c]||a[b]==a[d]||a[c]==a[d]){
		printf("isosceles triangle\n");
	}}
	else{
		printf("no triangle\n");
	}
	
}
