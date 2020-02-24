//CommonFunctions.h
#pragma once
#include<iostream>
#include<string>
using namespace std;

void print(string msg){
	cout<<msg<<endl;
}

string getString(string msg){
	print(msg);
	string answer;
	cin >> answer;
	return answer;
}

int getNumber(string msg){
	int answer = 0;
	print(msg);
	cin >> answer;
	return answer;
}

double getDouble(string question){
	double res = 0.0;
	print(question);
	cin>>res;
	return res;
}

