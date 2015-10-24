//Guanlian RongQi

//Using guanlian rongqi to solve the number of word counts in a sentance.

int main(){
	string s;
	map<string, int> counters;

	while(c >> s){
		++counters[s];
		for(map<string,int>::const_iterator it = counters.begin(); it != counters.end(); it ++){
			cout << it->first << "\t" << it->second << endl;
//first is the current key and second is the current value. we can use iterator to iterate the whole map.
}
		return 0;
}

map<string,vector<int>> xref(istream& in, vector<string> find_words(const string&) = split){
	string line;
	int line_number = 0;
	map<string, vector<int>> ret;

	while(getline(in,line)){
		++line_number;
		vector<string> words = find_words(line);
		for(vector<string>::const_iterator it = words.begin();
it != words.end(); it++){
			ret[*it}.push_back(line_number);
	}
	return ret;
}


