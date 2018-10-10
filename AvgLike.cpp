// AvgLike Series
#include <iostream> 
//#include <array>
//#include <string>

using namespace std;

//Puremathseries Average-like series Convergence 
//e.g. a1=1, a2=2,a3=(a1+a2)/2 , a4 = (a3+a2)/2... aoo ?
double PsAvgLikeC(double a, double b, int n){
	for(int i=3;i<=n;i++){
		b=a+b;
		a=b-a;
		b=b/2;
	}
	return b;
}
// Generation
//array<double,1000> PsAvgLikeG(double a, double b){
//	array<double,1000> ar;
//	for(int i = 2;i<=999; i++){
//		ar[i] = (ar[i-1]+ar[i-2])/2;
//	}
//	return ar;
//}


int main() {
	cout<< PsAvgLikeC(1,3,1000);
	return 0;
}



