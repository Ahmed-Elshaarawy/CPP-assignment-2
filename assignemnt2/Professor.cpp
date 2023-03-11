#include "Professor.h"
#include <iostream>
#include <string>
#include "Staff.h"
using namespace std;

#include "Professor.h"

Professor::Professor(string degree, int numOfpublications, double salary, string officeNum, double age, string name):Staff( name, age ,officeNum) {
	this -> degree = degree;
	this -> numOfpubblications = numOfpublications;
	this -> salary = salary;
}


Professor::Professor() {
	salary = 0;
};

Professor Professor::operator+ (const Professor& other)  {
	Professor temp;
	temp.salary = salary + other.salary;
	return temp;
}

bool Professor::operator<(const Professor& other)  {
	return salary < other.salary;
}

void Professor::setDegree(string degree) {
	this->degree = degree;
};
void Professor::setNumberOfPublications(int numOfpublications) {
	this->numOfpubblications = numOfpubblications;
};
void Professor::setSalary(double salary) {
	this->salary = salary;
};

string Professor::getDegree() { return degree; };
int Professor::getNUmberOfPublications() { return numOfpubblications; };
double Professor::getSalary() { return salary; };

void Professor::printProfessor() {
	cout << "Degree:" << degree << endl;
	cout << "numOfpublications:" << numOfpubblications << endl;
	cout << "Salary:" << salary << endl;
}