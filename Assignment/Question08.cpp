
#include <iostream>
#include <string>
using namespace std;
class Student{
	int rollno;
	string name;

public:
	static int total;

	 Student()
	{
		cout<<"\nEnter rollno & name : ";
		cin>>rollno>>name;

		char ch;
		cout<<"do you interested in games ??[y/n] : ";
		cin>>ch;
		if(ch=='Y'|| ch=='y')
			total++;
	}
	 void getData()
	{
		cout<<"rollno : "<<rollno<<"\t Name : "<<name<<endl;
	}
	static void say()
	{
		cout<<"total Students are interested in game : "<<total<<endl;
	}
};
int Student::total = 0;
int main()
{
	cout<<"Enter no of Students : ";
	int n;
	cin>>n;
	Student s[n];


	for(int i=0;i<n;i++)
		s[i].getData();

	s[0].say();
}
