#include"CommonFunction.h"
int getIDOfUser(){
	int no=getNumber("enter the ID of user :");
	if(no>50)
		throw "to big to store as ID";
	else if(no<5)
		throw "Not possible as ID upto 5 are Board members";
	print("the current ID given is ");
	return no;
}
int main(){
	RETRY:
		try{
			int id=getIDOfUser();
			cout<<"the ID Entered by usre is :"<<id<<endl;
		}
		catch(const char* msg){
			cout<<msg<<endl;
			goto RETRY;
		}
}
