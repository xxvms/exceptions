#include <iostream>

/*
 * 	Exceptions and handling exceptions
 */

int main() {

	float a = 5;
//	double  a = 5;
//	int a = 5;

	try {
		a *= 10;
		if (a == 50)
			throw a;
	}
	catch(int e)
	{
		std::cout << "INT A can not be equal to " << a << std::endl;
	}
	catch (double e)
	{
		std::cout << "Double - A can not be eaqul to " << a << std::endl;
	}
	catch (...)
	{
		std::cout << "This is catch all" << std::endl;
	}
	std::cout << "After catch " << std::endl;


	return 0;
}