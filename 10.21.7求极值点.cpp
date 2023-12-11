#include <stdio.h>
#include <math.h>
double eps=0.00000001;
double X(int x1,int y1,int x2,int y2,int s1,int s2);
double s(double x,int x1,int y1,int x2,int y2,int s1,int s2);
int main(){
	int x1, y1, x2, y2, s1, s2;
	scanf("%d%d%d%d%d%d",&x1, &y1, &x2, &y2, &s1, &s2);
	double x=X( x1, y1, x2, y2, s1, s2);
	double sum=s( x, x1, y1, x2, y2, s1, s2);
	printf("%.3f %.3f",x,sum);
	return 0;
}
double s(double x,int x1,int y1,int x2,int y2,int s1,int s2){
	double sum=s1*sqrt((x1-x)*(x1-x)+y1*y1)+s2*sqrt((x2-x)*(x2-x)+y2*y2);
	return sum;
}
double X(int x1,int y1,int x2,int y2,int s1,int s2){
	double mid1,mid2,l=x1,r=x2;
	mid1 = (2*l+r)/3;
    mid2 = (l+2*r)/3;
while(r-l>eps) {
    if(s(mid1, x1, y1, x2, y2, s1, s2) > s(mid2, x1, y1, x2, y2, s1, s2)) {
    	//此时供水站只可能在区间[mid1, r]上
        //补全你的代码
        l=mid1;
    }
    else {
    	//此时供水站只可能在区间[l, mid2]上
        //补全你的代码
        r=mid2;
    }
    mid1 = (2*l+r)/3;
    mid2 = (l+2*r)/3;
}
return mid1;
}

