#pragma once
#include <iostream>
#include "Staff.h"

using namespace std;

class Departement
{
private:
	string name;
	string location;
	Staff staffMembers;
public:
	Departement();
	Departement(string name, string location, Staff staffMembers);

	void setName(string name);
	void setLocation(string location);
	
	string getName();
	string getLocation();

	void displayfunction();
};

