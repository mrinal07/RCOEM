#include <iostream>
using namespace std;

// Defining function Division
float Division(float num, float den)
{
	// return the result of division
	return (num / den);

} // end Division

int main()
{
	// storing 12.5 in numerator
	// and 0 in denominator
	float numerator = 12.5;
	float denominator = 0;
	float result;

	// calls Division function
	result = Division(numerator, denominator);

	// display the value stored in result
	cout << "The quotient of 12.5/0 is "
		<< result << endl;

} // end main
