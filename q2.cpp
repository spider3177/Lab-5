// first include the library
#include <iostream>
using namespace std;
int main(){
	// ask for the numbers
	int a, b, c;
	cout << " Give me three numbers " << endl;
	cout << "the numbers should be different from each other" << endl;
	cin>>a>>b>>c;
	// code for the greatest integer
	if (a==b and b==c and a==c){
		cout << " by the way all are equal"  << endl;
		}
	else if (b==c){
		cout << " by the way "<< b << "and " << c << "are equal"  << endl;
	}
	else if (a==b){
		cout << " by the way "<< a << "and " << b << "are equal"  << endl;
	}
	else if (a==c){
		cout << " by the way "<< a << "and " << c << "are equal"  << endl;
	}
	else if (a>b and a>c){
		cout << " the greatest number of these is " << a << endl;
		}
	else if (b>a and b>c){
		cout << " the greatest number of these is " << b << endl;
		}
	else if (c>b and c>a){
		cout << " the greatest number of these is " << c << endl;
		}
return 0;
}
