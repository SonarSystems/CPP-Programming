#include <iostream>
#include <initializer_list>

template <class T>
void Adder( std::initializer_list<T> list )
{
	int total = 0;

	for ( auto element : list )
	{
		//total += element;
		std::cout << element << std::endl;
	}

	//std::cout << total << std::endl;
}

int main( )
{
	Adder( { 4, 8, 4, 87, 9 } );

	return 0;
}