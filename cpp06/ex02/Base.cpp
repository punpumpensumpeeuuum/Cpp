#include "Base.hpp"

Base::~Base()
{

}

Base* generate(void)
{
	int n = std::rand() % 3;
	switch (n)
	{
	case 0:
		return (new A());
	case 1:
		return (new B());
	case 2:
		return (new C());
	default:
		return (NULL);
	}
}

void identify(Base* p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "is Class A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "is Class B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "is Class C" << std::endl;
}

void identify(Base& p)
{
	try
	{
		A& a = dynamic_cast<A&>(p);
		std::cout << "is Class A\n";
		(void)  a;
		return;
	}
	catch(const std::bad_cast&) {}
	try
	{
		B& b = dynamic_cast<B&>(p);
		std::cout << "is Class B\n";
		(void) b;
		return;
	}
	catch(const std::bad_cast&) {}

	try
	{
		C& c = dynamic_cast<C&>(p);
		std::cout << "is Class C\n";
		(void) c;
		return;
	}
	catch(const std::bad_cast&) {}
}