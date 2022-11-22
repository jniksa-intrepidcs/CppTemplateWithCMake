#include <iostream>
#include <vector>

int main ()
{
char myWord[] = {'H', 'e', 'l', 'l', 'o', '\0'};
char* charArrayPointer = myWord;

//comparing 
int myWordLength_strlen = std::strlen(myWord);
int myWordLength_sizeof = sizeof(myWord) / sizeof(myWord[0]);

////temporary couts
std::cout << "myWordLength_sizof: " << myWordLength_sizeof << std::endl;//returns 6 since that is the size of the array
std::cout << "myWordLength_strlen: " << myWordLength_strlen << std::endl;//return 5 since it ignores null terminator

std::vector<char> descrVector;
descrVector.resize(myWordLength_strlen + 1);

std::copy(myWord, (myWord + myWordLength_strlen +1 ), descrVector.begin());
for (auto i : descrVector)
{
    std::cout << i << " " << std::endl;
}

return 0;
}



/* Now, this loop is not needed when using std::copy()
for (int i = 0; i < descrLength; i++)
{
    szErrorDescriptionShort[i] = szErrorDescriptionLong[i] = tempDescription[i];//since we are treating Short and Long as the same
}
*/

