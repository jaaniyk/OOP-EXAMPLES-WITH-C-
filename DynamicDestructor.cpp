#include<iostream>
using namespace std;
class Test{
	public:
		Test(){cout<<"constructor is called \n"; }
		~Test(){cout<<"object is about to be destroyed \n";	}
		
};
void object(){
	Test* t;
	for(int i=0; i<10; i++)
	{
		t=new Test();//in the stack 
		//so it call only constructor for return..
		delete t;//Explicity tells the object to be distroyed only if the object is created dynamically..
	}
}
int main(){
	object();
	return 0;
}
