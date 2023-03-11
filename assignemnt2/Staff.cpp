#include "Staff.h"
#include <iostream>
#include <string>
using namespace std;



Staff::Staff() { }

Staff::Staff(string Name, double Age, string OfficeNumber) {
	this->Name = Name;
	this->Age = Age;
	this->OfficeNumber = OfficeNumber;
}

Staff::Staff(const Staff& obj){
	Name = obj.Name;
	Age = obj.Age;
	OfficeNumber = obj.OfficeNumber;
}

void Staff::setName(string Name) {
	this -> Name = Name;
}

void Staff::setAge(double Age) {
	this-> Age = Age;
}

void Staff::setOfficeNumber(string OfficeNumber) {
	this-> OfficeNumber = OfficeNumber;
}

string Staff::getName() { return Name; };

double Staff::getAge() { return Age; };

string Staff::getOfficeNumber() { return OfficeNumber; };

void Staff:: print() {
	cout << "Name:" << Name << endl;
	cout << "Age" << Age << endl;
	cout << "OfficeNumber" << OfficeNumber << endl;

}
