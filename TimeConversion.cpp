#include <bits/stdc++.h>

using namespace std;

string timeConversion(string s) {
	int pm; 
	stringstream aux(s);
	stringstream result;
	
	if(s[8] == 'P'){
		aux >> pm; 
		if(pm != 12)       pm = (pm + 12); 
		
		aux >> s;
		result << pm << s; 
		result >> s;
	}
	else{
		aux >> pm; 
		if(pm == 12)       result << "00"; // midnight 
		else if (pm < 10)  result << '0' << pm;
		else               result << pm; 
		
		aux >> s; 
		result << s; 
		result >> s;
	}
	
	s.erase(s.size()-2, 2); // remove AM/PM 
	
	return s;
}

int main(){
	ofstream fout(getenv("OUTPUT_PATH"));

	string s;
	getline(cin, s);

	string result = timeConversion(s);

	fout << result << "\n";

	fout.close();

	return 0;
}