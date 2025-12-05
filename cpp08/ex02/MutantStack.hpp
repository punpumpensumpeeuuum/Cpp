#ifndef SPAN_H
# define SPAN_H 

# include <iostream>
# include <stack>
# include <list>

template <typename T, typename Container = std::deque<T> >
class MutantStack : public std::stack<T, Container>
{
	public:
		typedef typename Container::iterator iterator;
		iterator begin()
		{
			return (this->c.begin());
		}
		iterator end()
		{
			return(this->c.end());
		}
};

#endif