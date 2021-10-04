#include<iostream>
#include <string>
using namespace std;
class Movie
{
	string name;

public:
	Movie(string name)
	{
		this->name= name;
	}
	friend void display(Movie m);
};
void display(Movie m)
{
	cout<<"private name : "<<m.name<<endl;
}
int main()
{
	Movie m("Rahooo ketu");
	display(m);
}