
#include "School.h"
class Course;

class Semester
{
private:
	School* m_School;
	string name_Semester;
	int int_Year;
	vector<Course*> m_Course;

public:
	//Constructor
	Semester();
	Semester(School* school, string semester, int year);
	Semester(School* school, string semester);
	Semester(School* school);


	//Destructor
//	~Semester();

	//Function
	void print();
	void updateCourse(vector<Course*> course);
	void update(School* school, string semester, int year);


};
class Course
{
private:
	string m_Name;
	string id;
	string lectureHour;
	string practiceHour;
	Semester* m_Semester;
	int numberStudent;
	int maxStudent;
public:
	//Constructor
	Course();
	Course(string name, string ID, string lecture_hour, string practice_hour, Semester* semester, int student, int maxStudent);
	Course(string name, string ID, string lecture_hour, string practice_hour, Semester* semester);
	Course(string name, string ID, string lecture_hour, string practice_hour);
	Course(string name, string ID, string lecture_hour);
	Course(string name, string ID);
	Course(string name);
	//Destructor
	//~Course();
	//Function
	void print_Name();
	void print();
	string id_course();
	int int_student();
	int max_student();
	void update_student();
	void input();
	void updateSemester(Semester* semester);


};

