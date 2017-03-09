#include <iostream>
#include <string>
#include <fstream>
using namespace std;

class Files{
private:
	int linenum;
	string filename;
	string liness;
public:
	Files(string f = "nums", int n=1);

	string getLine();

};