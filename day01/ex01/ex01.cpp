                       
void	memoryLeak()
{
	std::string*	panthere = new std::string("panthere");
	
	std::cout << *panthere << std::endl;
	delete panthere;
}


