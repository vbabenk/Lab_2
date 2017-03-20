#ifndef University_h
#define University_h
#include "Student.h"
//#include <iostream>

class University {
private:
	Student**arr;
	unsigned int size; 
	unsigned int count;
public:
	University(int);
	~University();
	void add(string, string, string, int, int, int, string, string, string, int);
	void remove();
	void show();
	void check_by_faculty(string);
	void list_of_students();
	void check_by_year(int);
	void compare();
};

#endif 