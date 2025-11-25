#ifndef SPAN_H
# define SPAN_H 

# include <vector>
# include <string>
# include <iostream>
# include <exception>

class Span
{
private:
	unsigned int 		n;
	std::vector<int>	s;
public:
	Span(unsigned int i);
	~Span();
	void	addNumber(int num);
	int		shortestSpan();
	int		longestSpan();
	
};

#endif