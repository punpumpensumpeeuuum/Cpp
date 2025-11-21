#ifndef ITER_H
# define ITER_H 

# include <iostream>

template <typename T>
void	iter(T array[], const size_t l, void (*f)(T&))
{
	for (size_t i = 0; i < l; i++)
		f(array[i]);
}

template <typename T>
void	function(T &letter)
{
	std::cout << letter << std::endl;
}




#endif