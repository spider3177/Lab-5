// first library
#include <iostream>
using namespace std;
int main(){
// declaring the variable
 char a;
//asking for aletter
	cout <<" gimme a alphabet and i will tell you its a vowel or consonant"<< endl;
	cin>>a;
	//formulating
	if (a==65 or a==69 or a==73 or a==79 or a==85 or a==97 or a==105 or a==111 or a==119){
	cout << " the alphabet is a vowel"<<endl;
	}
	else {
	cout << " it is a consonant"<< endl;
	}
return 0;
}
