#include "Departement.h"
#include "Staff.h"
#include <string>
#include <iostream>
using namespace std;

Departement::Departement() {

}
Departement::Departement(string name, string location, Staff staffMembers) {
	this->name = name;
	this->location = location;
	this->staffMembers = staffMembers;
}

void Departement::setName(string name) {
	this-> name = name;
}
void Departement::setLocation(string location) {
	this-> location = location;
}
string Departement::getName() { return name; };
string Departement::getLocation() { return location; };

void Departement::displayfunction() {
	cout << "Name :" << name << endl;
	cout << "Location" << location << endl;
}