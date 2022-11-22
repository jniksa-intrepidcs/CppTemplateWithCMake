#include <iostream>

int main()
{
    //INT_MAX is: 2147483647
	size_t dataSizeCheck = 2147483640;
	if (dataSizeCheck > INT_MAX)
	{
		std::cout << "Length of error data is larger than INT_MAX" << std::endl;
        return -1;
	}
    std::cout << "ALL GOOD!" << std::endl;
    return 0;
}