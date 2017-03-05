#include <iostream>
#include <string>
#include <fstream>
#include "permutations.h"
using namespace std;

int main(){
	cout << "Which file would you like to read?: ";
	string fileinput;
	cin >> fileinput;
	cout << "which line would you like to know the legnth of?: ";
	int lengthinput;
	cin >> lengthinput;
	Files f1(fileinput, lengthinput);
	string line;
	line = f1.getLine();
	cout << "The line is: " << line.size() << " long" << endl;
	return (0);
}