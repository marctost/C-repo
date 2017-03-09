#include <iostream>
#include <string>
#include <fstream>
#include "Files.h"
using namespace std;



Files :: Files(string f, int n)
	:linenum(n), filename(f)
{}

string Files :: getLine(){
	ifstream myfile;
	myfile.open(filename);
	int b(1);
	string finalline;
	while (getline(myfile, liness)){
		if (b==linenum){
			finalline = liness;
		}
		++b;
	}
	myfile.close();
	return(finalline);
}