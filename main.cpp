#include<iostream>
#include <vector>
#include <string>
#include <fstream>
using namespace std;

vector<string> FromFile(ifstream& file) {
	vector<string> textFromFile; 

	string line;
	while (getline(file, line)) {
		textFromFile.push_back(line);
	}

	for (size_t i = 0; i < textFromFile.size(); i++) {
		cout << textFromFile[i] << endl;
	}

	return textFromFile;
}

void PrintVector() {};

void ToNewFile() {};

int main() {

	ifstream meowFile("meowFile.txt");
	vector<string> lines = FromFile(meowFile);

	PrintVector();
	ToNewFile();

	return 0;
}