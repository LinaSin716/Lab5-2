/*
 читает из текстового файла набор строк в вектор (функция № 1), 
 а затем выводит эти строки на экран (функция № 2) 
 и записывает их файл (функция № 3).
*/

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