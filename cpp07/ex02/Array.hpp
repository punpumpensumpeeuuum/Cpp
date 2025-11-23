#ifndef ARRAY_H
# define ARRAY_H 

# include <iostream>
# include <exception>
# include <cstdlib>

template <typename T> class Array
{
	private:
 		T* arr;
		size_t len;
	public:
		Array();
		Array(unsigned int n);
		Array(const Array& a);
		Array& operator=(const Array& source);
		T& operator[](unsigned int i);
		~Array();
		size_t	size() const
		{
			return (len);
		}
};

template <typename T>
Array<T>::Array()
{
	arr = NULL;
	len = 0;
}

template <typename T>
Array<T>::Array(unsigned int n)
{
	arr = new T[n];
	len = n;
}

template <typename T>
Array<T>::Array(const Array& a)
{
	arr = NULL;
	*this = a;
}

template <typename T>
Array<T> &Array<T>::operator=(const Array& a)
{
	if (this == &a)
		return (*this);
	if (this->arr)
		delete[] arr;
	len = a.size();
	arr = new T[len];
	for (size_t i = 0; i < len; i++)
		arr[i] = a.arr[i];
	return (*this);
}

template <typename T>
T& Array<T>::operator[](unsigned int i) 
{
	if (i >= len)
		throw std::exception();
	return (arr[i]);
}

template <typename T>
Array<T>::~Array()
{
	delete[] arr;
}

#endif