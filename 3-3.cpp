//write a program to count the times of differnt words appeared into the typing-in

#include <iostream>
#include <vector>

using namespace std;

int main(){

vector<string> inputString;
typedef vector<string>::size_type vec_size;
vec_size size = inputString.size；

cout << "Please enter your string you want to input" << endl;

string input;
int count = 0;

while( cin >> input ){

	inputString.push_back(input);
	count++;
	for(int i = 0; i < count; i++){
		if(inputString[i] == inputString[count]){
	}
 
}

if(inputString.size == 0){
	cout << "Error! The size of the String Array is 0" << endl;
	return 1;
}


