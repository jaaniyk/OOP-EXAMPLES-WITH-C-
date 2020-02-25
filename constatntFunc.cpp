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
		string displayName()const{
			name="test name";
		return name;
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
		string name=t.displayName();
		cout<<"the name:"<<name<<endl;
		t.printName();
		Test t2("java");
		t2.printName();
		t2.staticMethod();
		//cteate a const object and calling the method..
		const Test t3("c#");
		name=t3.displayName();
		//t3.printName(); u cannot call the non constatnt functin thro..
		}			
