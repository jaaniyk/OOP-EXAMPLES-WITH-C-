#include<iostream>
#include<string>
using namespace std;
class Test{
	private:
		static int TestNo;
		string name;
	public:
		Test(string tname){
		name=tname;
		TestNo+=1;
		}
		void printName(){cout<<"test name:"<<name<<endl;	}	
		static void staticMethod(){
			cout<<"static function called \n";
			cout<<"the total number of Test currently is:"<<TestNo<<endl;
		}	
	};
	int Test::TestNo=0;
	int main(){
		Test::staticMethod();
		Test t("cpp");
		t.printName();
		Test t2("java");
		t2.printName();
		t2.staticMethod();
		}			
	
