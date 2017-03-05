#include <iostream>
#include <string>
#include <fstream>
using namespace std;

class Files{
private:
	string line;
	int linenum;
	string filename;

public:
	Files(string f = "nums", int n = 1){
		linenum = n;
		filename = f;
	}

	string getLine(){
		ifstream myfile;
		myfile.open(filename);
		int b(1);
		string finalline;
		while (getline(myfile, line)){
			if (b==linenum){
				finalline = line;
			}
			++b;
		}
		myfile.close();
		return(finalline);
	}
};