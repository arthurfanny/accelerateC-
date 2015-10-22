#include <iostream>
#include <string>

using namespace std;

int main(){
	cout << "what is your name?";
	string name;
	cin >> name;
	cout << "Hello," << name << endl << "And what is yours?";
	cin >> name;
	cout << "Hello, " <<name << "Nice to meet you two!" << endl;
	return 0;
}


