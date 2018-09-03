// first the library
#include <iostream>
using namespace std;
int main(){
	//declaring the variables
	int a;
	// asking for a number
	cout<< "Gimme any natural number "<<endl;
	cin>>a;
	//formulating
	while (a>0){
	cout<<"Back it up "<< a<<endl;
	--a;
	}
return 0;
}
