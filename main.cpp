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

void PrintVector() {};

void ToNewFile() {};

int main() {

	ifstream meowFile("meowFile.txt");

	FromFile();
	PrintVector();
	ToNewFile();

	return 0;
}