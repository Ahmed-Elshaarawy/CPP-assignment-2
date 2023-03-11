// assignemnt2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Professor.h"
#include "Departement.h"
#include "Assistant.h"

using namespace std;

int main() {
    
    Departement D1;
    Departement D2;
    Staff S1;
    Staff S2;
    
    Professor p1("Science", 10, 2000, "B105", 10, "Ammar");
    Professor p2("Science", 10, 2000, "B105", 10, "Ammar");
    Professor p3 = p1 + p2;
    cout << "p3's salary is: " << p3.getSalary() << endl; 

    //copy constructor called
    Departement D3 = D2;

    if (p1 < p2) {
        cout << "p1 has a lower salary than p2" << endl;
    }
    else {
        cout << "p1 has a higher salary than p2" << endl;
    } 

    Assistant a1(2010, "A10", 33, "Mazen");
    Assistant a2(2010, "A15", 32, "Reem");
    if (a1 == a2) {
        cout << "a1 and a2 graduated in the same year" << endl;
    }
    else {
        cout << "a1 and a2 did not graduate in the same year" << endl;
    } 

    return 0;
    
}

void displayfunction() {}
void print() {}
void printProfessor() {}
void printAssistant() {}


