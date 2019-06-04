#include <iostream>
#include <conio.h>
using namespace std;

class Student 
{
private:
	int code;
	int socialId;
	char* fullname;
	char* address;
	double gpa;
public:
	Student();
	Student(int m_code, int socialID, char* m_fullname, char* m_address, double m_gpa);
	void Copy(Student q);
	~Student();
	void input();
	void output();
};

Student::Student()
{
	code = 0;
	socialId = 0;
	fullname = NULL;
	address = NULL;
	gpa = 0.0;
}
Student::Student(int m_code, int socialID, char* m_fullname, char* m_address, double m_gpa)
{
	code = m_code;
	socialId = socialID;
	fullname = m_fullname;
	address = m_address;
	gpa = m_gpa;
}
void Student::Copy(Student q)
{
	q.code = code;
	q.socialId = socialId;
	q.fullname = fullname;
	q.address = address;
	q.gpa = gpa;
}
Student::~Student()
{
	cout << "\nDestructor completed its work to free the memory !";
}
void Student:: input()
{
	cout << "\nInput the Code of Student: ";cin>> code;
	cout << "\nInput the Social ID of Student: ";cin>> socialId;
	cout << "\nInput the Full name of Student: ";cin>> *fullname;
	cout << "\nInput the Address of Student: ";cin>> *address;
	cout << "\nInput the GPA of Student: ";cin>> gpa;
}
void Student::output()
{
	cout << "\The Code of Student: "<< code;
	cout << "\nThe Social ID of Student: "<<socialId;
	cout << "\nThe Full name of Student: "<<*fullname;
	cout << "\nThe Address of Student: " <<*address;
	cout << "\nThe GPA of Student: "<< gpa;
}