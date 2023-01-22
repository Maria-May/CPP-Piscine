#include <stack>
#include <iostream>

template<typename T>
class MutantStack: public std::stack<T>
{
public:
	typedef typename std::stack<T>::container_type::iterator iterator;

	iterator begin() { return this->c.begin(); }
	iterator end() { return this->c.end(); }

	iterator begin() const { return this->c.begin(); }
	iterator end() const { return this->c.end(); }
};
