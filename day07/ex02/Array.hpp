
#pragma once

#include <stdlib.h>
#include <stdio.h>
#include <iostream>

template <typename T>
class Array
{
	private:
		unsigned int siz;
		T *elems;
	public:
		Array();
		Array(unsigned int);
		~Array();
		Array(Array &);
		Array &operator=(const Array &);
		T &operator[](unsigned int n) const;

		unsigned int	size() const;
		T *getElems();
		class Bounds: public std::exception
		{
			public:
				virtual const char * what() const throw()
				{
					return ("Out Of Bounds Exception\n");
				}
		};
};

template <typename T>
Array<T>::Array()
{
	elems = NULL;
}

template <typename T>
Array<T>::~Array()
{
	if (elems)
		delete (elems);
	elems = NULL;
}


template <typename T>
Array<T>::Array(unsigned int s)
{
	elems = new T[s];
	siz = s;
}

template <typename T>
T*	Array<T>::getElems()
{
	return (elems);
}

template <typename T>
T	&Array<T>::operator[](unsigned int n) const
{
	if (n >= size())
	{
		throw (Array::Bounds());
	}
	return (this->elems[n]);
}

template <typename T>
Array<T> &Array<T>::operator=(const Array & a)
{
	std::cout << "___invoking = between arrays operator___" << std::endl;
	for (unsigned int i = 0; i < a.siz; i++)
		elems[i] = a[i];
	std::cout << "exit =\n";
	return (*this);
}

template <typename T>
Array<T>::Array(Array &a)
{
	std::cout << "___invoking copy constructor___" << std::endl;
	elems = new T[a.size()];
	siz = a.size();
	*this = a;
	std::cout << "___exit copy constructor___\n";
}

template <typename T>
unsigned int Array<T>::size() const
{
	return (siz);
}

template <typename T>
std::ostream &operator<<(std::ostream &o, Array<T> &a)
{
	for (unsigned int i = 0; i < a.size(); i++)
		std::cout << a[i] <<" ";
	return (o);
}

