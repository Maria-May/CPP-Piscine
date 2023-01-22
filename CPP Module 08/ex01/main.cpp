#include "Span.hpp"

int main( void )
{
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	// *** ITERS ***
	Span span = Span(5);
	span.fillSpan(span.begin(), span.end());
	for (std::vector<int>::iterator it = span.begin(); it != span.end(); it++)
		std::cout << *it << std::endl;
	try { span.addNumber(12); }
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	return EXIT_SUCCESS;
}