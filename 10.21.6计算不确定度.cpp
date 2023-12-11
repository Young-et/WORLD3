#include<stdio.h>
#include<math.h>
int main(){
	double x_=0,sum=0,x,u;
	int n;
	scanf("%d",&n);
	double a[n];
	for(int i=0;i<n;i++){
		scanf("%lf",&a[i]);
		x_+=a[i];
	}
	x_/=n;
	for(int i=0;i<n;i++){
		sum+=(a[i]-x_)*(a[i]-x_);
	}
	u=sqrt(sum/n/(n-1));
	printf("%.6f\n%.6f",x_,u);
}

