// first include the library
#include <iostream>
using namespace std;
int main (){
//declaring the variable
int a;
// asking for a number
	cout << " bro gimme a number" << endl;
	cin>> a;
	// assigning the formula
	if (a%5==0) {
	cout << "the number is divisible by 5" << endl;
	}
	else {
	cout << " the number is not divisible by 5" << endl;
	}
	if (a%11==0) {
	cout << "the number is divisible by 11" << endl;
	}
	else {
	cout << "the number is not divisible by 11" << endl;
	}
return 0;
}
