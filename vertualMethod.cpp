#include<iostream>
using namespace std;
class BaseClass{
	public:
		void BaseFunc(){
			cout<<"Base Function \n";
		}
		virtual void virtualFunc(){
			cout<<"vertual method could be modified by the derived \n";
		}
};
class derivedClass:public BaseClass{
	public:
		void virtualFunc(){
			cout<<"vertual method from derived\n";
		}
};
int main(){
	BaseClass* ptr=new BaseClass();
	ptr->virtualFunc();
	ptr=new derivedClass();
	ptr->virtualFunc();
}
