#include <iostream>
#include <algorithm>
#include <vector>
#include <limits.h>

class Span {
private:
	unsigned int _maxSize;
	unsigned int _currentSize;
	unsigned int _shortestSpan;
	unsigned int _longestSpan;
	bool _needToFindSpans;
	std::vector<int> _data;
	void findSpans();
public:
	Span(unsigned int maxSize);
	~Span(void);
	void addNumber(int number);
	void fillSpan(std::vector<int>::iterator begin, std::vector<int>::iterator end);
	unsigned int shortestSpan();
	unsigned int longestSpan();
	std::vector<int>::iterator begin();
	std::vector<int>::iterator end();
};
