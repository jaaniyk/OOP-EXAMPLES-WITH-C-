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
BaseClass* createObject(string arg){
	if(arg=="Base")
		return new BaseClass();
	else
		return new derivedClass();
}
int main(){
	string version;
	cout<<"enter the class u want :Base or else?\n";
	cin>>version;
	BaseClass* ptr=createObject(version);
	ptr->virtualFunc();
}
