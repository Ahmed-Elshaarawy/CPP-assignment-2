#pragma once
#include <iostream>
#include <string>
using namespace std;

class Staff
{
private:
	string Name;
	double Age;
	string OfficeNumber;
public:

     Staff();
	Staff(string Name, double Age, string OfficeNumber);

	Staff(const Staff& obj);

	void setName(string Name);
	void setAge(double Age);
	void setOfficeNumber(string OfficeNumber);

	string getName();
	double getAge();
	string getOfficeNumber();

	void print();
};

