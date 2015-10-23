#include <algorithm>

//This is an example of generic programming 
//copy(bottom.begin(),bottom.end(), back_inserter(ret));
/*
which is the same as the copy(begin, end, out)
while(begin != end){
	*out++ = *begin++;}
which is equivalent to 
( *out = *begin; ++out; ++begin;)

another way to realize the function of split()
bool space(char c){
	return issapce(c);
}

bool not_space(char c){
	return !isspace(c);
}

vector<string> spilt(const string& str){
	typedef string::const_iterator iter;
	vector<string> ret;
	iter i = str.begin();
	while (i != str.end()){
		i = find_if(i, str.end(), not_space);
		iter j = find_if(i, str.end(), space);
		if(i != str.end()){
			ret.push_back(string(i,j)):
		}
	}
	return ret;
}

One way to solve the palindrome:
bool is_palidrome(const string& s){
	return equal(s.begin(), s.end(), s,rbegin());
}
//s.beign--s.end() is the first string and rbegin() is the second string which both of two will be compared in reversed order.

vector<string> find_urls(const string& s){
	vector<string> ret;
	typedef string::const_iterator iter;
	iter b = s.begin(), e = s.end();

	while(b ! = e){
		b = url_beg(b,e);
		if (b != e){
			iter after = url_end(b,e);
			ret.push_back(string(b,after));
			b = after
		}
	return ret;
}
}

string::const_iterator
url_end(string::conster_iterator b, string::const_iterator e){
	return find_if(b, e, not_url_char);
}

bool not_url_char(char c){
	static const  string url_ch = "~;/?:@=&$";
	return !(isalnum(c) || find(url_ch.begin(), url_ch.end(), c) ! = url_end());
}

bool did_all_hw(const Student_info& s){
	return ((find(s.homework.begin(), s.homework.end(), 0)) == s.homework.end());
}

vector<Student_info> did, didnt;
Student_info student;
wihle (read(cin, student)){
	if(did_all_hw(stduent)){
		did.push_back(student);
	else
		didnt.push_back(student);
}

if (did.empty()){
	cout << " No student did all the homework! " << endl;
	return 1;
}

if (didnt.empty()){
	cout << " Every student did their homework!" << endl;
	return 0;
}

double median_analysis(const vector<Student_info>& students){
	vector<double> grades;
	transform(students,begin(), students.end(), back_interator(grades), grade);
	return median(grades;
}

dboule grade_aux(const Student_info& s){
	try{
		return grades(s);
	}
	catch(domain_error){
		return grade(s.midterm, s.final, 0);
	}
}

void write_analysis(ostream& out, const string& name, double analysis(const vector<Student_info>&), const vector<Student_info>& did, const vector<Student_info>& didnt){
	out << name << ": median(did) = " << analysis(did) << ", median(didnt) = " << analysis(didnt) << endl;


