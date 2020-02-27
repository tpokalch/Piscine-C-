
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

class Stack
{
	public:
		Stack(int);
		char *s;
		int size;
		int pos;
		void popStack();
		void pushStack(char &c);
};

void Stack::pushStack(char &c)
{
//	if (pos != -1)
	pos++;
	s[pos] = c;
}	


void Stack::popStack()
{
	pos--;
}	
	
	
char	opposite(char c)
{
	if (c == ')')
		return ('(');
	else if (c == '}')
		return ('{');
	else if (c == ']')
		return ('[');
	return (0);
}

Stack::Stack(int size)
{
	this->size = size;
	s =(char *)malloc(sizeof(char) * size);
	memset(s, 0, size * 4);
	pos = -1;
}
	
void	print_stack(char *s, int pos, int size)
{
	int i = 0;

	printf("stack1:%c   ", s[0]);
	while (i < size/*s[i]*/)
	{
		if (i == pos)
			printf("->");
		printf("%c", s[i]);
		if (i == pos)
			printf("<-");
		i++;
	}
	printf("\n");
}

int	check_brackets(char *s)
{
	Stack stack(strlen(s) + 1);
	int i = -1;
	while (s[++i])
	{
		if (s[i] == '[' || s[i] == '(' || s[i] == '{')
			stack.pushStack(s[i]);
		else if (s[i] == ']' || s[i] == ')' || s[i] == '}')
		{
			if (stack.pos == -1 || !(stack.s[stack.pos] == opposite(s[i])))
				return (0);
			stack.popStack();
		}
	}
	if (stack.pos == -1)
		return (1);
	return (0);
}

int main(int a, char **v)
{
	printf("brackets ok? : %d\n", check_brackets(v[1]));
}






