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
	template <typename T> 
	void	addNumber(T start, T end)
	{
		unsigned int dst = static_cast<unsigned int>(std::distance(start, end));
		if(dst == 0 || v.size() == n || \
				(n == 0) || (n - v.size() < dst))
			throw std::exception();
		v.insert(this->v.end(), start, end);
	}
	size_t	shortestSpan();
	size_t	longestSpan();
};

#endif