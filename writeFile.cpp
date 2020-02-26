#include<iostream>
#include<string>
#include<sstream>
#include<fstream>
using namespace std;
void write(string filename) {
	ofstream oFs;
	string line = "";
	oFs.open(filename.c_str(), ios::app);//app means appending a file...
	while (oFs) {
		getline(cin, line);
		if (line == "end") {
			break;
		}
		oFs << line << endl;
	}
	oFs.close();
}
int main(){
	string filename = "C:/Users/DAC/Desktop/as.txt";
	write(filename);
	return 0;
}
