#include<iostream>
#include<string>
using namespace std;
class Book{
	private:
	string name;
	public:
		Book(string name):name(" "){
			this->name=name;
		}
		void read(){
			cout<<"The Book "<<name<<" is now trending\n";
		}
};
class Author{
	string name;
	Book library;
	public:
		Author(string name, Book info):library(" "){
			this->name=name;
			library=info;
		}
	
		void Read(){
			library.read();
			cout<<"This Book got Book of the year\n";
		}
};
int main(){
	Book publish("HALFWAY");
	Author author("YUVRAJ.K",publish);
	author.Read();
}
