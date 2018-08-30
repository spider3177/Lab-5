// first the library
#include <iostream>
using namespace std;
int main (){
// declaring the variable
int a;
	//asking for the year
	cout << " gimme a year and Iwill tell you its a leap year or not"<< endl;
	cin >> a;
	// formulating
	if (a%4==0){ 
	cout <<" the year is a leap year :)"<< endl;
	}
	else {
	cout <<"the year is not a leap year :(";
	}
return 0;
}
