#include "Student.h"
#include <iostream>
#include <cstring>
using namespace std;

// Assign studentId and name
void Student::assignDetails(int studentIdn, char n[20]) {
  strcpy(name, n);
  studentId = studentIdn;
}

// Display StudentId and Name
void Student::display() {
  cout<< "Student Name = " << name<<endl;
  cout<< "Student ID = "<<studentId;
  
}
