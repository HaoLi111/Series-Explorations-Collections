// Fibonacci
#include <iostream>
//#include <string>
using namespace std;

int main() {
	unsigned long long int i,an,am,t;
	cout<<"1/"<<"1"<<"\n";
	cout<<"2/"<<"1"<<"\n";
	am=1;
	an=1;
	for(i = 2; i<=92; i++) {
		t=an;
		an=am + an;
		am=t;
		cout<<i<<"/"<<an<<"\n";
	}
	return 0;
}
