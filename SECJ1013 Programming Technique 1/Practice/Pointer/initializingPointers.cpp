#include <iostream>
using namespace std;

int main()
{
    int vals = 1;
    //int *valptr; //points to garbage address (unseen address)
    // Correct statement
    //int *valptr = NULL; // --for uninitializes valptr
    int *valptr = &vals;
    
    if (!valptr)
        cout << "Not pointing to anything" << endl;
    else
        cout << "Pointing to something" << endl;

    return 0;
}