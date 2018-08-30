// first the library
#include <iostream>
using namespace std;
int main(){
// declaring the variable
char a;
// asking a variable
	cout << " push a button on your keyboard"<< endl;
	cin >> a;
// formulating
	if (a>32 and a<48) {
	cout<<" its a special character"<< endl;
	}
	else if (a<91 and a>64){
	cout << " its an alphabet and is a capital letter "<< endl;
	}
	else if (a<123 and a>96){ 
	cout << " its an alphabet and is a small letter" << endl;
	}
	else if (a<47 and a<58) {
	cout << " its a number"<< endl;
	}
	else {
	cout << " button not specified"<< endl;
	}
return 0;
}
