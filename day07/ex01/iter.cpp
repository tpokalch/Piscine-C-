
#include <iostream>

template <typename T>
void	iter(T *a, int s, void (*func)(T &))
{
	for (int i = 0; i < s; i++)
		(*func)(a[i]);
}

template <typename T>
void	f(T & n)
{
	n++;
}

template <typename T>
void	display(T & a)
{
	std::cout << a;
}

int	main()
{
	int a[10] = {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1};

	iter(a, 10, display);	
	iter(a, 10, f);	
	printf("\n");
	iter(a, 10, display);
	printf("\n");	
}





