#pragma once
#include "Person.h"
#include "Utility.h"
class Student : public Person
{
private:
	string studentId;
	Department department;
	ClassName className;

public:
	Student(const string& id, const string& lastName, const string& firstName, const string& gender, const string& birthDate, const string& studentId, const Department& department, const ClassName& className);

	// Getter, 取值函數
	string getStudentId() const;
	Department getDepartment() const;
	ClassName getClassName() const;

	// Setter, 設值函數
	void setStudentId(const string& studentId);
	void setDepartment(const Department& department);
	void setClassName(const ClassName& className);

	void display() const;
};