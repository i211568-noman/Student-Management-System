#include "Student.h"
#include <vector>
#include <iostream>
using namespace std;

void printAllStudents(const vector<Student>& students) {
    cout << "Student List:" << endl;
    for (const auto& student : students) {
        student.printInfo();
    }
}

int main() {
    vector<Student> students;
    students.push_back(Student(1, "Alice", 3.5));
    students.push_back(Student(2, "Bob", 3.8));
    students.push_back(Student(3, "Carol", 2.9));

    printAllStudents(students);

    return 0;
}
