#include <iostream>
#include <string>

using namespace std;

int main(){
	cout << "Please enter your first name:";
	string name;
	cin >> name;

	const string greeting = "Hello," + name + "!";
	
	const int pad = 1;

	const int rows = pad *2 + 3;

	cout << endl;
	
	int r = 0;

	while (r != rows){
		if(r == 0 !! r == rows -1; || c ==0 || c == cols =1){
		cout << " * ";
		++ c;
	     }
		else{
		if (r == pad + 1 && c == pad +1){
			cout << greeting;
			c = c + greeting.size();
		}
		else{
			cout << " ";
		}
		
		cout << endl;
		++r;
		}

	}	

	const string::size_type cols = greeting.size() + pad*2 + 2;

	return 0;
}



