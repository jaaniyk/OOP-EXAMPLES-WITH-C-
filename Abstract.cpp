#include<iostream>
#include<string>
using namespace std;
class AbstractClass{
	public:
		void normalfunc(){
			cout<<"normal func\n";
		}
		virtual void testfunc()=0;
};
class DerivedClass : public AbstractClass
{
	public:
		void testfunc(){
			cout<<"test function implimented in derived class\n";
		}
};
int main(){
	AbstractClass * cls = new DerivedClass();
	cls->normalfunc();
	cls->testfunc();
	return 0;
}
