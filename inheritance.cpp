#include<iostream>
using namespace std;
class BaseClass{
	public:
	void testfunc(){cout<<"test function Implemented"<<endl;}	
};
class derivedClass:public BaseClass{
	public:
		void anotherFunc(){cout<<"Another Function Implemented"<<endl;}
};
void objectVersion(){
	BaseClass cls;
	cls.testfunc();
	derivedClass cls2;
	cls2.testfunc();
	cls2.anotherFunc();
}
void PointerVersion(){
	BaseClass* pBase=new BaseClass();
	pBase->testfunc();
	derivedClass* pDerive=new derivedClass();\
	pDerive->testfunc();
	pDerive->anotherFunc();
}
int main(){
	PointerVersion();
}
