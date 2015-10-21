#include<iostream>
#include<string>

using namespace std;

int main(){
	
	const string hello = "hello";
	hello = "good job";	
	cout << hello;

	string a(10,'a');
	cout << a;
	return 0;

}

