#include <iostream>
using namespace std;

//Function Prototype 
void changeName(char [][25], int size);

int main()
{
    //1. Define an array of strings (5 rows for names, 25 columns for max character).
    //2. Initialize the array 5 names.
    char name[5][25] = {"Ann", 
                        "Bill",
                        "Cindy",
                        "David",
                        "Elisa"};
    

    //3. Print the names.
    cout << "--- Original names --- " << endl;
    for (int i = 0; i < 5; i++)
        cout << (i + 1) << ". " << name[i] << " " << endl;

    cout << endl;

    //Call the function to change names
    changeName(name, 5);

    //Print the names again to verify changes
    cout << "\n--- Updated names ---" << endl;
    for (int i = 0; i < 5; i++)
        cout << name[i] << " ";

    return 0;
}

//4. Write a function to change the names in the array. 
void changeName(char friends[][25], int size)
{
    cout << "--- Change Names ---" << endl;

    for (int j = 0; j < size; j++)
    {
        cout << "Enter new name for friend " << (j + 1) << ": ";
        //Use cin >> to read a single word name.
        //Note: This overwrites the existing data in the row
        cin >> friends[j];
    }
}