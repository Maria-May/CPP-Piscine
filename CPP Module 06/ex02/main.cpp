#include <iostream>
#include <stdlib.h>

class Base
{
public:
	virtual ~Base() {};
};

class A : public Base
{
};

class B : public Base
{
};

class C : public Base
{
};

Base * generate(void)
{
	Base* base;
	int n = rand() % 3;

	if (n == 0) { std::cout << "A created" << std::endl; base = new A(); }
	if (n == 1) { std::cout << "B created" << std::endl; base = new B(); }
	if (n == 2) { std::cout << "C created" << std::endl; base = new C(); }
	return base;
}

void identify(Base* p)
{
	if (p == NULL)
	{
		std::cout << "NULL" << std::endl;
		return;
	}
	A* baseA;
	B* baseB;
	C* baseC;

	baseA = dynamic_cast<A *>(p);
	baseB = dynamic_cast<B *>(p);
	baseC = dynamic_cast<C *>(p);
	if (baseA)
		std::cout << "A" << std::endl;
	if (baseB)
		std::cout << "B" << std::endl;
	if (baseC)
		std::cout << "C" << std::endl;
}

void identify(Base& p)
{
	A* baseA;
	B* baseB;
	C* baseC;

	baseA = dynamic_cast<A *>(&p);
	baseB = dynamic_cast<B *>(&p);
	baseC = dynamic_cast<C *>(&p);
	if (baseA)
		std::cout << "A" << std::endl;
	if (baseB)
		std::cout << "B" << std::endl;
	if (baseC)
		std::cout << "C" << std::endl;
}

int main(int argc, char** argv)
{
	if (argc != 2)
	{
		std::cout << "Arguments error" << std::endl;
		return (EXIT_FAILURE);
	}
	int times;
	try { times = std::stoi(argv[1]); }
	catch (std::invalid_argument&)
	{
		std::cout << "Pass an integer" << std::endl;
		return EXIT_FAILURE;
	}
	catch (std::out_of_range&)
	{
		std::cout << "Integer is overflowed" << std::endl;
		return EXIT_FAILURE;
	}
	if (times < 0)
	{
		std::cout << "Enter a positive value" << std::endl;
		return EXIT_FAILURE;
	}
	Base *base;
	while (times)
	{
		base = generate();
		identify(base);
		identify(*base);
		delete base;
		times--;
	}
	return EXIT_SUCCESS;
}