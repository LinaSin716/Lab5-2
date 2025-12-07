#include<iostream>
#include <vector>
#include <string>
#include <fstream>
using namespace std;

vector<string> FromFile() {

	// чтобы скомпилировалось: 
	vector<string> v; 
	return v;
}

void PrintVector(const vector<string>& lines) {
	for (size_t i = 0; i < lines.size(); i++) {
		cout << lines[i] << endl;
	}
}

void ToNewFile(const vector<string>& lines, const string& file1) {
	ofstream file(file1);
	for (size_t i = 0; i < lines.size(); i++) {
		file << lines[i] << endl;
	}
}

int main() {

	ifstream meowFile("meowFile.txt");
	vector<string> lines = FromFile();
	
	PrintVector(lines);
	ToNewFile(lines, "new.txt");

	return 0;
}