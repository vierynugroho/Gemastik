#include <iostream>

using namespace std;

int main()
{
    string myArray[2] = {"Viery", "Nugroho"};
    for (int i = 0; i < sizeof(myArray); i++)
    {
        cout << myArray[i] << endl;
    }
}