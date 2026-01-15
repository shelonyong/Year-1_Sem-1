#include <iostream>
using namespace std;

int main()
{
    int *ptr;

    ptr = new int;

    *ptr = 25;

    cout << "Value stored: " << *ptr << endl;
    cout << "Address pointed by ptr: " << ptr << endl;

    delete ptr; //free the allocated memory

    ptr = NULL; //NULL or nullptr 
                //Avoid dangling pointer

    return 0;
}