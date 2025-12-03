#ifndef SPAN_H
# define SPAN_H 

# include <vector>
# include <string>
# include <iostream>
# include <exception>
# include <cstdlib>
# include <iterator>
# include <algorithm>

class Span
{
private:
	unsigned int 		n;
	std::vector<int>	v;
public:
	Span();
	Span(unsigned int i);
	Span(const Span& s);
	Span &operator=(const Span &s);
	~Span();

	void	addNumber(int num);
	size_t	shortestSpan();
	size_t	longestSpan();
};

#endif