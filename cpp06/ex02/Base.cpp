#include "Base.hpp"

Base::~Base()
{

}

Base* Base::generate(void)
{
	int n = std::rand() % 3;
	switch (n)
	{
	case 0:
		return (new A());
		break;
	case 1:
		return (new B());
		break;
	case 2:
		return (new C());
		break;
	default:
		return (NULL);
		break;
	}
}

void Base::identify(Base* p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "is Class A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "is Class B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "is Class C" << std::endl;
}

void Base::identify(Base& p)
{
	// falta este 
}