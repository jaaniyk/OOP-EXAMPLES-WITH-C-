#include<iostream>
#include<string>
using namespace std;
class Account{
	public:
		int accNo;
		string name;
		string address;
		int balance;
	virtual	void credit(int amount){balance+=amount;}
	virtual	void debit(int amount){balance-=amount;}
	virtual	void calculateInterest()=0;
	
};
class SBAccount: public Account{
	public:
		SBAccount(int amount=1000){
			balance+=amount;
		}
		virtual void calculateInterest(){
			int interest=balance*1/12*6.5/100;
			credit(interest);
		}
};
Account* createAccount(string type){
	if(type=="SB")
		return new SBAccount();
}
int main(){
	string type="SB";
	Account*acc=createAccount(type);
	acc->credit(5000);
	acc->debit(200);
	acc->calculateInterest();
	cout<<"the current balance :"<<acc->balance;
	return 0;
}
