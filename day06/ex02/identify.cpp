
#include "Base.hpp"

void	identify_from_pointer(Base *(P))
{
	const A * ret1 = dynamic_cast<A *>(P);
	if (ret1)
	{
		std::cout << "A\n";
		return ;
	}
	const B * ret2 = dynamic_cast<B *>(P);
	if (ret2)
	{
		std::cout << "B\n";
		return ;
	}
	const C * ret3 = dynamic_cast<C *>(P);
	if (ret3)
	{
		std::cout << "C\n";
		return ;
	}
}

void	identify_from_reference(Base &(P))
{
	try
	{
		const A ret1 = dynamic_cast<A &>(P);
		std::cout << "A" << std::endl;
	}
	catch (std::bad_cast &bc)
	{
	}
	try
	{
		const B ret2 = dynamic_cast<B &>(P);
		std::cout << "B\n";
	}
	catch (std::bad_cast &bc)
	{
	}
	try
	{
		const C ret2 = dynamic_cast<C &>(P);
		std::cout << "C\n";
	}
	catch (std::bad_cast &bc)
	{
	}

}
