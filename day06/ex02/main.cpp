
#include "Base.hpp"

void	identify_from_pointer(Base *(P));
void	identify_from_reference(Base &(P));

int	main()
{
	A a;
	B b;
	C c;
	std::cout << "Identify from pointer" << std::endl;
	std::cout << "C?:";
	identify_from_pointer(&c);	
	std::cout << "A?:";
	identify_from_pointer(&a);
	std::cout << "B?:";
	identify_from_pointer(&b);


	std::cout << "Identify from reference" << std::endl;
	std::cout << "B?:";
	identify_from_reference(b);	
	std::cout << "A?:";
	identify_from_reference(a);
	std::cout << "C?:";
	identify_from_reference(c);
}
