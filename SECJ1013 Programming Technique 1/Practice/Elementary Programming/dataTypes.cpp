//Show some examples of datatypes that can be used in C++
#include <iostream>
#include <string>
using namespace std;

int main() {
    cout << "---C++ Data Types Examples---" << endl << endl;

    //Integer Types (for whole number)
    int age = 30;
    long population = 4294967295;
    short temperature = -5;
    unsigned int distance = 10;
    
    //Floating-Point Types (for decimal number)
    float price = 19.99f;
    double pi = 3.1416;

    //Character Types (for a single character)
    char grade = 'A';
    char symbol = '$';

    //Boolean Types (for true/false values)
    bool isStudent = true;
    bool isRaining = false;
    cout << boolalpha; //Use 'boolalpha' to print "true" or "false" instead of 0 1
    cout << "isStudent: " << isStudent << endl;
    cout << "isRaining: " << isRaining << endl << endl;

    //Sring Types (for text)
    string greeting = "Hello, World!";
    string name = "See En";
    cout << "Greeting: " << greeting << endl;
    cout << "Name: " << name << endl;
    
    cout << 13 / 5 << endl;
    cout << 13 / 5.0 << endl;
    cout << 9 % 2 << endl;
    //cout << 9 % 2.0;

    int z, y = -5;
    z = 8 - 3 + 9 / 2 + 2 * - y;
    cout << z << endl;
    z = 8 - (3 + 9 / 2) + 2 * - y;
    cout << z << endl;

    return 0;
}