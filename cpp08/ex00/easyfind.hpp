#ifndef EASYFIND_H
# define EASYFIND_H 

# include <iostream>
# include <vector>
# include <algorithm>
# include <stdexcept>
# include <list>

template <typename T>
typename T::iterator easyfind(T& c, int i)
{
	typename T::iterator a = find(c.begin(), c.end(), i);
	if (a == c.end())
		throw std::exception();
	return (a);
}


#endif