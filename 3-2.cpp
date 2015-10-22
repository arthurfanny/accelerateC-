#include <iostream>
#include <algorithm>

using namespace std;

int main(){

vector<int> number;
typedef vector<int>::size_type vec_size;
vec_size size = number.size();


cout << "Please enter the number you want to put in batch" << endl;

int m = 0;

while ( cin >> m ){
	number.push_back(m);
}

sort(number.begin(), number.end());

int number1 = size / 4;
int number2 = size / 2;
int number3 = number2 + number1;
int number4 = number.size() - 1;
int count = 1;

while(count != number1){
	cout << number[count];
	count++;
}

int count = number1;
while(count != number2){
	cout << number[count];
	count ++;
}

return 0;
}




 
