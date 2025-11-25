#include <iostream>
#include <cstring>
using namespace std;

int main() {
    
    const int SIZE = 20;
    char city[SIZE];

    //using cin.getline 
    cin.getline(city, SIZE);
    cout << "You entered: " << city << endl; //displays all

    //using strlen function - return length of string
    cout << "Length of " << city << " is " << strlen(city) << endl;

    char taman[SIZE] = "Tmn U, ";

    //using strcat - add string 2 to end of string 1
    //cout << "The combined string is " << strcat(str1,str2) << endl; [FORMAT]
    cout << "The combined string is " << strcat(taman, city) << endl; //cannot directly include literal cstring in the first argument 

    //using strcpy - copy str2 to str1
    char copiedAddress[SIZE];
    strcpy(copiedAddress, "Tmn U, Skudai");
    /*example: can put literal string
    strcpy(copiedAddress, "Tmn U, Skudai")*/
    
    //NOTE: No bound checking (determines length exceed or not) is done at strcat and strcpy -- excess characters will take space of other variables
    cout << "The copied string is " << copiedAddress << endl;

    //using strstr() function - finds keyword of str2 from str1 (first occurence of "target")
    cout << strstr(copiedAddress, "U") << endl;

    //strcmp - compare string 
    if (strcmp(copiedAddress, "Tmn U, Skuda"))
    {
        cout << "Different string" << endl;
        cout << strcmp(copiedAddress, "Tmn U, Skuda") << endl;
    }
        
    else 
    {
        cout << "Same string" << endl;
        cout << strcmp(copiedAddress, "Tmn U, Skuda") << endl;
    }

    //using cstdlib
    //atoi function - converts alphanumeric to int
    int num;
    num = atoi("123abc");
    cout << num << endl;

    return 0;
} 