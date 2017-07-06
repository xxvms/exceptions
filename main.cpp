#include <iostream>

/*
 * 	Exceptions and handling exceptions
 */
class DivisionByZeroException
{
public:
	void getErrorMessage() {std::cout << "Error: do not divide by zero";}
};

double division(double a, double b) throw(DivisionByZeroException) // <- this is uded as information to other programmers to use throw
{
	if (b == 0)
		throw DivisionByZeroException();
	if (a == 0)
		throw a;
	return a/b;
}
int main() {

	double result;

	try
	{
		result = division(5, 0);
		std::cout << "resutl is: " << result << std::endl;

	}
	catch (DivisionByZeroException e)
	{
		e.getErrorMessage();
	}
	catch (...)
	{
		std::cout << " this is generic catch" << std::endl;
	}


	return 0;
}


/*
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
*/
