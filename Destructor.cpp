#include<iostream>
using namespace std;
class Test{
	public:
		Test(){cout<<"constructor is called \n"; }
		~Test(){cout<<"object is about to be destroyed \n";	}
		
};
void object(){
	for(int i=0; i<10; i++)
	{
		Test t;
	}
}
int main(){
	object();
	return 0;
}
