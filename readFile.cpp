
#include<iostream>
#include<string>
#include<sstream>
#include<fstream>

using namespace std;
void readFromFile(string filename) {
	ifstream fIn;
	string line="";
	fIn.open(filename.c_str());
	while (fIn) {
		getline(fIn, line); //use while(fIn>>line) when this getline removed or not used 
		cout << line << endl;//Display the line...
	}
	fIn.close();
}
int main()
{
	string filename = "C:/Users/DAC/Desktop/as.txt";
	readFromFile(filename);
	return 0;
}

