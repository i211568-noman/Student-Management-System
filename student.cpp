#include "Student.h"
#include <iostream>
using namespace std;

Student::Student(int id, string name, float gpa) : id(id), name(name), gpa(gpa) {}

int Student::getId() const { return id; }
string Student::getName() const { return name; }
float Student::getGpa() const { return gpa; }

void Student::printInfo() const {
    cout << "ID: " << id << ", Name: " << name << ", GPA: " << gpa << endl;
}
