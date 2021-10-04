#include<iostream>
#include<string>
using namespace std;
// A->B->D
// C->D
class A{

public:
	A()
	{
		cout<<"class A\n";
	}
};
class B: public A{

public:
	B()
	{
		cout<<"class B\n";
	}
};
class C{

public:
	C()
	{
		cout<<"class C\n";
	}
};
class D : public B, public C{

public:
	D()
	{
		cout<<"class D\n";
	}
};
int main()
{
	D d;
}