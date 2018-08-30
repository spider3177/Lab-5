// first the library
#include <iostream>
using namespace std;
int main(){
// declaring the variable
char a;
// asking for the alphabet
	cout <<" tell an alphabet"<< endl;
	cin >> a;
	// formulating 
	if (a<91 and a>64){
	cout << " its an alphabet and is a capital letter "<< endl;
	}
	else if (a<123 and a>96){ 
	cout << " its an alphabet and is a small letter" << endl;
	}
	else {
	cout <<" its not an alphabet"<< endl;
	}
return 0;
}
