
#include <iostream>

template <typename T>
class MutantStack
{
	private:
		unsigned int size;
	public:
		MuntantStack();
		MutantStack(MutantStack &);

		unsigned int size() const;
		T *stack;
		void push();
		void pop();
		bool empty() const;
		T *begin();
		T *end();
}

MutantStack::MutantStack()
{
	size = 0;
	stack = NULL;
}

void	copystack(T *s, T *d, unsigned int size)
{
	for (int i = 0; i < size; i++)
		s[i] = d[i];
}

MutantStack::MutantStack(MutantStack &a)
{
	size = a.size;
	stack = new T[size];

	copystack(a.stack, stack, size)
}

MutantStack::push(T &a)
{
	size = size + 1;
	T *newstack = new T[size];

	for (int i = 0; i < size - 1; i++)
		newstack[i] = stack[i];
	newstack[i] = a;
	if (stack)
		delete stack;
	stack = newstack;
}

MutantStack::pop()
{
	size = size - 1;
}

bool MutantStack::empty()
{
	return (size == 0);
}

T *MutantStack::begin()
{
	return (stack);
}

T *MutantStack::end()
{
	return (stack + size - 1);
}




	
