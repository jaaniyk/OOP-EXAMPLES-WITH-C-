#include<iostream>
#include<string>
using namespace std;
class Infotainment{ 
	string name;
public:
	Infotainment() :name("") {

	}
	Infotainment(string name) : name(name){
		//this->name = name;
	}
	void play() {
		cout << "The Infotainment " << name << " is playing music\n";
	}
};

class Car {
	string name;
	Infotainment device;
public:
	Car(string name, Infotainment info) : device("") {
		this->name = name;
		device = info;
	}

	void Run() {
		device.play();
		cout << "Car is in Run Mode, Drive safely\n";
	}
};

int main() {
	Infotainment entertainment("Sony");
	Car car("HONDA WRV", entertainment);
	car.Run();
}
