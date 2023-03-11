#pragma once
#include <iostream>
#include <string>
#include "Staff.h"
using namespace std;

class Professor : public Staff {
private:
	string degree;
	int numOfpubblications;
	double salary;
public:
	Professor(string degree, int numOfpublications, double salary, string officeNum, double a, string name);
	Professor();

	//function overloading to add the salary of the professors by + operator
	Professor operator+(const Professor& other);
	//function overloading to see whether the salary of the professors is higher than another professor
	bool operator < (const Professor& obj);

	//setters
	void setSalary(double salary);
	void setDegree(string degree);
	void setNumberOfPublications(int numOfpublication);

	//getters
	double getSalary();
	string getDegree();
	int getNUmberOfPublications();

	//print function
	void printProfessor();

};

