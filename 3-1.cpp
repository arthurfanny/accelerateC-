#include <iomanip>
#include <ios>
#include <iostream>
#include <string>

using namespace std;

int main(){
cout << "Please enter your first name: "
string name;
cin >> name;

cout << "Hello " << name << endl;

cout << "Please enter your midterm and final exam grades: ";

double midterm, final;

cin >> midterm >> final;

cout << "Enter all your homework grades, " << "followed by end-of-file:";

int count = 0;
double sum = 0;

double x;
vector<double> homework;

while( cin >> x){
	++count; 
	sum = sum + x;
	homework.push_back(x)//method to push x into the end of the vector and the vector will increase by length 1
}

typedef vector<double>::size_type vec_sz;
vec_sz size = homework.size();

//try to sort the homework into ordered list;
sort(homework.begin(), homework.end());

vec_sz mid = size / 2;
double median;
median = size % 2 == 0 ? (homework[mid] + homework[mid - 1]) / 2 : homework[mid];

streamsize prec = cout.precision();
cout << "Your final grade is " << setprecision(3) << 0.2* midterm +0.4 * final +0.4 * median << setprecision(proc) << endl;


if(size == 0){cout << endl << " You must enter your grades"
"Please try again." << endl;
return 1;
}






streamsize prec = count.precision();

count << "Your final grade is " << setprecision(3) << 0.2 * midterm + 0.4 * final + 0.4 * sum/count << setprecision(prec) << endl;

return 0;

}




