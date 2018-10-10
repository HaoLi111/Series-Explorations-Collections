// FibonacciLike series 
#include <iostream>
using namespace std;
double PsFibLikeC_2dbl(double a,double b,int n){
	for(int i = 3;i<=n-1;i++){
		b=a+b;
		a=b-a;
	}
	return b;
}

int main() {
	cout<< PsFibLikeC_2dbl(0.5,-0.4,20);
	return 0;
}
