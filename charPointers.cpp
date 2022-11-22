#include <iostream>

void charPointers(char* inout)
{
    *inout = {'z'}; // points to the first element of the array and adds 'z'
    *(inout + 1) = {'p'}; //points to the second element and adds 'p'
    for (int i = 0; i < *inout.size(); i++)
    {
        std::cout << "Element " << i << " " << "is: " << inout[i] << std::endl;
    }

}
int main ()
{
    char str[255] = {0};// Initialises all 255 elements to null.
    std::cout << std::endl << "The (str) char array first element is: " << str[0] << std::endl << "And size of it is: " << sizeof(str) << std::endl;
    charPointers(str);
    std::cout << std::endl << "The (str) char array first element is NOW: " << str[0] << std::endl << "And size of it is: " << sizeof(str) << std::endl;

    char things[4] = {'w', 'x', 'y'}; //Initializes first 3 elements to w,x,y.
    std::cout << std::endl << "The (things) char array first element is: " << things[0] << std::endl << "And size of it is: " << sizeof(things)<< std::endl;
    charPointers(things); //overwrites 'w' and 'x' with 'z' and 'p'
    std::cout << std::endl << "The (things) char array first element is: " << things[0] << std::endl << "And size of it is: " << sizeof(things)<< std::endl;

    return 0;
}