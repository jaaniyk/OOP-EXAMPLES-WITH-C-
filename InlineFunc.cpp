#include<iostream>
#include<string>
using namespace std;
class Example{
	private:
		string someDataForMySelf;
	public:
		void simpleFunc();
		friend void getURPrivateData();// A Friend fn is not a member function of the class. 
};
inline void Example::simpleFunc(){
		someDataForMySelf="Apple 123";
		cout<<"Inline Function for optimization \n";
}
void getURPrivateData() {//This function does not have :: operator
	Example ex;
	ex.simpleFunc();
	//Calling the private field with the object outside the class...
	cout << "The private value: " << ex.someDataForMySelf << endl;
}

int main(){
		Example ex;
	ex.simpleFunc();
	getURPrivateData();
}
