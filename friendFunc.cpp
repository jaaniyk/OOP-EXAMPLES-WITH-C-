#include<iostream>
#include<string>
using namespace std;
class Example{
	private:
		string someDataForMySelf;
	public:
		void simpleFunc();
		friend void getURPrivateData();
};
inline void Example::simpleFunc(){
		someDataForMySelf="Apple 123";
		cout<<"Inline Function for optimization \n";
}
void getURPrivateData() {
	Example ex;
	ex.simpleFunc();
	cout << "The private value: " << ex.someDataForMySelf << endl;
}

int main(){
		Example ex;
	ex.simpleFunc();
	getURPrivateData();
}
