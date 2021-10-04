

#include<iostream>
#include<string>
using namespace std;
class Movie
{
public:

	string name;

public:
	Movie() // default
	{
		name = "Iron Man";
	}

	Movie(string name) // parameterized...
	{
		this->name = name;
	}
	Movie(Movie &m) // copy;
	{
		this->name = m.name;
	}

	~ Movie()
	{
		cout<<this->name<<" is expired...\n";
	}
};
int main()
{
	Movie m1;
	Movie m2("HULK");
	Movie m3(m1);

	cout<<"Movie 1 : "<<m1.name<<endl;
	cout<<"Movie 2 : "<<m2.name<<endl;
	cout<<"Movie 3 : "<<m3.name<<endl<<endl;

}