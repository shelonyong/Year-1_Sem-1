#include <iostream>
using namespace std;

/*int main()
{
    int vals[] = {4, 7, 11};
    int *valptr = vals;

    valptr ++;

    cout << *valptr << endl;

    cout << *(valptr + 1) << endl;

    cout << *valptr + 1 << endl;

    valptr += 1;

    cout << *valptr << endl;

    cout << valptr - vals << endl;

    return 0;
}*/

int main()
{
    int vals[] = {4, 7, 11};
    int *valptr = vals;

    cout << vals[1] << endl;
    cout << valptr[1] << endl;

    return 0;
}