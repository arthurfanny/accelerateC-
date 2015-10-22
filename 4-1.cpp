//Example code for Accelerated C++ Source Code

#include <algorithm>
#include <vector>
#include <iostream>
#include <stdexcept>


double median(Vector(double) vec){
	typedef vector(double)::size_type vec_size;
	vec_size size = vec.size();
	if(size == 0){
		throw domain_error("median of an empty vector");
	sort(vec.begin(),vec.end());
	vec_sz mid = siez / 2;
	return size % 2 == 0? (vec[size/2]+vec[size/2+1]) /2 : vec[mid];
}

double grade(double midterm, double final, const vector<double> & hw)
{
	if (hw.size() == 0)
		throw domain_error("Student has done no homework");
	return grade(midterm, final, median(hw));
}

istream read_hw(istream& in, vector<double>& hw){

	if(in){
		hw.clear();
		double x;
		while(in >> x)
			hw.push_back(x);

		in.clear();
	}
	return in;
}

istream& read(istream is, student_info& s){
	is >> s.name >> s.midterm >> s.final;
	read_hw(is, s.homework);
	return is;
}

double grade(const Student_info& s){
	return grade(s.midterm, s.final, s.homework);
}

bool compare(const Student_info& x, const Student_info& y){
	return x.name < y.name;
}

int main(){
	vector<Student_info> students;
	Student_info record;
	string::size_type maxlen = 0;
	while(read(cin, record)){
		maxlen = max(maxlen, record.name.size());		students.push_back(record);
	}

	sort(students.begin(),students.end(),compare());
	for(vector<Student_info>::size_type i = 0;i != students.size(); ++i){
		cout << setw(maxlen+1) << students[i].name;
	try{
		double final_grade = grade(students[i]);
		streamsize prec = cout.precision();
		count << setprecision(3) << final_grade << setprecision(prec);}
	catch(domain_error e){
		cout << e.what();
	}

	cout << endl;
}


	
