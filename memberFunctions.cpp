// C++ to illustrate the above concepts
#include <iostream>

class A {
	int a;

public:
	// Member function
	void memberfn(int x)
	{
		a = x;
		std::cout << "Member function inside"
			<< " class declared\n";
	}

	// Member function but definition
	// outside the class
	void memberfn2();
};

// Member function declared with
// scope resolution operator
void A::memberfn2()
{
	std::cout << "Member function but declared "
		<< " outside the class\n";
}

// Non-member function
void nonmemberfn()
{
	std::cout << "Non-member function\n";
}

// Driver Code
int main()
{
	// Object of class A
	A obj;

	// Calling Member Function
	obj.memberfn(5);
	obj.memberfn2();

	// Calling Non-Member Function
	nonmemberfn();

	return 0;
}
