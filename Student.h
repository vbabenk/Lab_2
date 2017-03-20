#ifndef Student_h
#define Student_h
//#include <string.h>
#include <string>
using namespace std;

class Student {
private:
	string surname;
	string name;
	string patronymic;
	int b_day;
	int b_month;
	int b_year;
	string address;
	string phone;
	string faculty;
	int course;
public:
	Student(string cur_s, string cur_n, string cur_pat, int cur_bd, int cur_bm, int cur_by, string cur_a, string cur_ph,
		string cur_f, int cur_c) :surname(cur_s), name(cur_n), patronymic(cur_pat), b_day(cur_bd), b_month(cur_bm), 
		b_year(cur_by),address(cur_a), phone(cur_ph), faculty(cur_f), course(cur_c)
	{
	};
	Student()
	{
	}
	~Student() 
	{
	};
	void set_surname(string s);
	void set_name(string n);
	void set_patronymic(string pat);
	void set_bday(int bd);
	void set_bmonth(int bm);
	void set_byear(int by);
	void set_birthday(int bd, int bm, int by);
	void set_address(string a);
	void set_phone(string ph);
	void set_faculty(string f);
	void set_course(int c);
	string get_surname() const 
	{ 
		return surname; 
	};
	string get_name() const 
	{ 
		return name; 
	};
	string get_patronymic() const 
	{ 
		return patronymic; 
	};
	int get_bday() const 
	{ 
		return b_day; 
	};
	int get_bmonth() const 
	{ 
		return b_month; 
	};
	int get_byear() const
	{
		return b_year;
	};
	string get_address() const
	{
		return address;
	};
	string get_phone() const
	{
		return phone;
	};
	string get_faculty() const
	{
		return faculty;
	};
	int get_course() const
	{
		return course;
	};
	void show() const;
	Student compare(Student* st);
};

#endif 