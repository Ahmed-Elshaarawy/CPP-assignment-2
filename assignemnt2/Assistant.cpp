#include "Assistant.h"
#include "Staff.h"
#include <iostream>
#include <string>
using namespace std;

Assistant::Assistant(int graduationYear, string name, double age, string OfficeNum):Staff(name, age, OfficeNum) {
	this -> graduationYear = graduationYear;
}

void Assistant::setGradYear(int graduationYear) {
	this-> graduationYear = graduationYear;
};

int Assistant::getGradYear() { return graduationYear; };

bool Assistant::operator== (const Assistant& other) {
	return getGradYear() == other.graduationYear;
}

void Assistant::printAssistant() {
	cout << "GraduationYear:" << graduationYear << endl;
}