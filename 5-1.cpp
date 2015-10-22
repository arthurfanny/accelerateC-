#include <iostream>
#include <vector>

bool fgrade(const Student_info& s)
{
	return grade(s)<60;
}



//First extract_fails approach, which will double the memory size of the vector Student_info because of the loop sentance.
vector<Student_info> extract_fails(vector<Student_info>& students){
	vector<Student_info> pass,fail;
	
	for(vector<Student_info>::size_type i = 0; i != student.size(); i++){
		if(fgrade(students[i]){
			fail.push_back(student[i]);
		}
		else{
			pass.push_back(student[i]);
		}
		
//return student who pass the exam.  
		student = pass;
//return fail who failed the test.
		return fail;

}

//Second Approach

vector<Student_info> extract_fails(vector<Student_info>& students){
	vector<Student_info> fail;
	vector<Student_info>::size_type i = 0;

	while(i != student.size()){
		if(fgrade(student[i]){
			fail.push_back(student[i]);
		//we won't add i++ because when you erase an index element, the number of index will decrease by 1
			students.erase(students.begin()+1);}
		else{
			i++;
		}
}
	return fail;
}

//using iterator
for (vector<Student_info>::const_interator iter = students.begin(); iter != students.end(); iter ++){
	cout << (*iter).name << endl;
	cout << item->name << endl;
//Both way will do
}

//using iterator version3

vector<Student_info> extract_fails(vector<Student_info>& students){
	vector<Student_info> fail;
	vector<Student_info>::iterator iter = students.begin();
	while(iter != students.end()){
		if(fgrade(*iter)){
			fail.push_back(*iter);
			iter = students.erase(iter);
		}

		else{
			++iter;
		}
	}
	return fail;
}


//using list to replace vector data strcture.

list<Student_info> extract_fails(list<Student_info>& students){
	list<Student_info> fail;
	list<Student_info> iterator iter = students.begin();
	while(iter != students.end()){
		if(fgrade(*iter)){
			fail.push_back(*iter);
			iter = studetns.erase(iter);
		}
		else{
			++iter;
		}
	return fail;
}

//sort method for list template
//sort function is embeded into the list template
list<Student_info> students
students.sort(compare);

//As for the sort for vector, use the sort in #include<algorithm>

vector<Student_info> students;
sort(students.begin(), students.end(), compare);

//String Vector
//Trying to separate individual words from the input stringLine;

vector<string> split(const string &s){
	vector<string> ret;
	typedef string::size_type string_size;
	string_size i = 0;

	while( i != s.size()){
		while(i != s.size() && isspace(s[i]){
			++i;
		}
	
		string_size j = i;
		while(j != s.size() && !isspace(s[i]){
			++j;
		}

		if( i != j ){
			ret.push_back(s.substr(i, j-i));
			i = j;
		}
	}
	return ret;
}

int stringTest(){
	string s;
//getline comes from #include<string>
	while(getline(cin, s)){
		vector<string> v =split(s);
		for(vector<string>::size_type i = 0 ; i != v.size(); i++){
			cout << v[i] << endl;}
		return 0;
}

string::size_type width(const vector<string>& v){
		string::size_type maxlen - 0;
		for(vector<string>::size_type i = 0; i != v.size(); i++)
			maxlen = max(maxlen, v[i].size())
		return maxlen;
}


vector<string> frame(const vector<string>& v){
	vector<string> ret;
	string::size_type maxlen = width(v);
	string border(maxlen + 4, '*');

	ret.push_back(border);
	
	for(vector<string>::size_type i = 0; i != v.size(); ++i){
		ret.push_back("*" + v[i] + string(maxlen -v[i].size(),' ') + "*");
		ret.push_back(border);
		return ret;
}

vector<string> hcat(const vector<string>& left, vector<string>& right){
	vector<string> ret;
	string::size_type with1 = width(left) + 1;
	vector<string>::size_type i = 0, j = 0;
	while (i != left.size() || j != right.size()){
		string s;

		if(i != left.size()){
			s - left[i++};
		}

		s += string(width1 - s.size(), ' ');

		if (j != right.size()){
			s += right[j++];

		ret.push_back(s);
		}

	return ret;
}




















