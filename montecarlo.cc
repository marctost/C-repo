#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main(){
	double x;
	double y;
	double toplimit;
	long inside(1);
	long outside(1);
	//cout << "How many data points would you like to use?: " << endl;
	//cin >> toplimit;
	//ofstream myfile;
	//myfile.open("monteoutput");
	for (int j=10; j < 1000000000; j*=2){
		toplimit = j;
		for (double i=0; i<toplimit; ++i){     //loops up to the desired number of point
			x = ((double) rand() / (RAND_MAX));  //generates random #
			y = ((double) rand() / (RAND_MAX));  // same thing

		if (x*x+y*y < 1){      //if the point is in the circle, increases the counter by one
			inside = inside + 1;	
			}
		}
		double pi;
		double percenterror;
		pi = inside/toplimit; 
		pi *= 4;
		percenterror = ((pi/3.14159265359)*100) - 100;
		//myfile << toplimit << ": " << pi << "    " << percenterror << endl;
		cout << toplimit << ": " << pi << "    " << percenterror << endl;
		inside=1;
	}
	//myfile.close();
}