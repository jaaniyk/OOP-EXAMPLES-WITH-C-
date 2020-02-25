#include<iostream>
using namespace std;
class UserDetails{
	public:
		string name,address;
		UserDetails(string name, string address){
			this->name=name;
			this->address=address;
		}
};
class Employee{
	private:
		static int NoOfTimes;
		int id;
		double salary;
		UserDetails* details;
	public:
		Employee(Employee& emp){
		cout<<"copy constructor is invoked\n";
		this->id=emp.id;
		this->salary=emp.salary;
		this->details=emp.details;
		NoOfTimes+=1;
		cout<<"copy constructer is invoked "<<NoOfTimes<<" Time(s)\n";
		}
		Employee(int id,double salary, UserDetails* details){
			this->id=id;
			this->salary=salary;
			this->details=details;
			cout<<"Employee is created\n";
		}
		void showDetails(){
			cout<<"the name of Employee:"<<details->name<<endl;
			cout<<"the address of Employee:"<<details->address<<endl;
			cout<<"the salary of Employee:"<<salary<<endl;
			cout<<"the ID of Employee:"<<id<<endl;
		}
};
int Employee::NoOfTimes=0;
void showDetails(Employee emp){
	emp.showDetails();
}
Employee createEmployee(int id,string name,string address,double salary){
	Employee emp(id,salary,new UserDetails(name,address));
	return emp;
}
int main(){
	Employee emp(188,45000,new UserDetails("YUVRAJ","LATUR"));
	showDetails(emp);//passing an object as arg to function..
	 
	Employee temp(emp);//copying data of one object into another..
	showDetails(emp);
	
	emp=createEmployee(535,"JAANI","LATUR",56000);
	showDetails(emp);//function returning an EMployee as return type..
	
}
