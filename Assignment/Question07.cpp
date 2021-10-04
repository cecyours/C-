
#include<iostream>
#include<string>
using namespace std;
class Student{
	string name;

public:
	Student(string name)
	{
		this->name = name;
	}
	void display()
	{
		cout<<"class Student, \t name : "<<name<<endl;
	}
};
//-------------
class Distance{
	float length;
	
	public:
		Distance(float length)
		{
			this->length = length;
		}	
		void display()
		{
			cout<<"class Distance, \t length: "<<length<<endl;
		}
};
//-----------
class Shape{
	string name;
public:
	Shape(string name)
	{
		this->name = name;
	}
	void display()
	{
		cout<<"class Shape, \t name : "<<name<<endl;
	}
};
//--------------
class Employee{
	string name;
public:
	Employee(string name)
	{
		this->name = name;
	}
	void display()
	{
		cout<<"class Employee, \t name : "<<name<<endl;
	}
};
//----------------
class Feet{
	float height;

public:
	Feet(float height)
	{
		this->height = height;
	}
	void display()
	{
		cout<<"class Feet, \t height : "<<height<<endl;
	}
};
//---------------
class Time
{
	string time;
public:
	Time(string time)
	{
		this->time = time;
	}
	void display()
	{
		cout<<"class Time,\t Time : "<<time<<endl;
	}
};
//-------------
class Date{
	string date;
public:
	Date(string date)
	{
		this->date = date;
	}
	void display()
	{
		cout<<"class Date, \tdate : "<<date<<endl;
	}
};
int main()
{
	Student s("jay");
	Distance d(39.23);
	Shape code("Oval");
	Employee e("Gk");
	Feet f(12.2f);
	Time t("10:30 PM");
	Date dt("10/10/2021");

	s.display();
	d.display();
	code.display();	
	e.display();	
	f.display();	
	t.display();
	dt.display();	


}