// first include the library
#include <iostream>
using namespace std;
int main(){
	// ask the user for two numbers
	cout << " Tell me the number and I will tell you the greatest of them!!! "<< endl;
	// declare the variables
	int a, b;
	cout << " Give me two numbers " << endl;
	cin >> a >> b;
	// search for the greater number
	if (a>b){
		cout << "the greatest number of these is " << a << endl;
		}
	else { 
		cout << "the greatest number of these is " << b << endl;
		}
	return 0;
} 		
