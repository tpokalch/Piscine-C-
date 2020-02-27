
#include <string>
#include <iostream>
#include <ostream>
#include <stdlib.h>

struct Data
{
	std::string s1;
	int n;
	std::string s2;
};

std::ostream &operator<<(std::ostream & o, Data const & d)
{
/*	std::cout << d.s1 << std::endl;
	std::cout << d.n << std::endl;
	std::cout << d.s2 << std::endl;
*/

//////////////////////////////////////////
//   COUT DOESN'T WORK ON STD::STRING   //
//           PLEASE PEER TO PEER        //
//////////////////////////////////////////

	printf("%s\n", d.s1.c_str());
	std::cout << d.n << std::endl;
	printf("%s\n", d.s2.c_str());
	return (o);
}

void	*serialize(void)
{
	Data *d;
	int i;
	d = new Data[1];
	const char alphanum[] = "0123456789"
        "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
        "abcdefghijklmnopqrstuvwxyz";

	for (i = 0; i < 8; i++)
		d->s1[i] = alphanum[rand() % (52)];
	d->n = rand() * ((rand() & 1) ? 1 : -1);
	for (i = 0; i < 8; i++)
		d->s2[i] = alphanum[rand() % (52)];
	return (reinterpret_cast<void *>(d));
}

Data *deserialize(void *raw)
{
	return (reinterpret_cast<Data *>(raw));
}

int	main()
{
	void *ret;

	srand(time(0));
	ret = serialize();
	std::cout << (*deserialize(ret));
	//WHY CAN'T DELETE??
}

















