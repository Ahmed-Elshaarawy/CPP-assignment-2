#pragma once
#include <iostream>
#include <string>
#include "Staff.h"
using namespace std;

class Assistant :public Staff{
private:
	int graduationYear;
public:
	Assistant();
	Assistant(int graduationYear, string officeNum, double a, string name);
	void setGradYear(int graduationYear);
	int getGradYear();
	bool operator== (const Assistant& other);
	
	void printAssistant();
};

