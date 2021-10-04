

#include <iostream>
using namespace std;

class Code{

public:
	Code()
	{
		cout<<"we are in code class\n";
	}
};

class Debug : virtual public Code{

public:
	Debug()
	{
		cout<<"we are in Debug class\n";
	}
};

class Release : virtual public Code
{
	public:
	Release()
	{
		cout<<"we are in Release class\n";
	}

};
class Error : public Debug, public Release{

public:
	Error()
	{
		cout<<"we are in Error class\n";
	}
};

int main()
{
	Error r;
}