//Name: YONG SEE EN
//Matrics Number: A25CS0168
//Date: 19/12/2025
#include <iostream>
using namespace std;

void dispStatus(int);
void getInput(int&, int&, int&, int&);
void dispOutput(int);
int calcAverage(int, int);

int main() 
{
    int totalCases, newCases, totalDeath, totalRecovered;
    int activeCases; 
    int totalActive = 0; 
    int highestActive = 0; 
    int numStates= 0;
    char state[50];
    char highestState[50];
    char ch;
    
    do 
    {
        cout << "<<<<<<<<<<<<<< DATA >>>>>>>>>>>>>" << endl;
        cout << "State name     : ";
        cin.getline(state, 50);
        
        getInput(totalCases, newCases, totalDeath, totalRecovered);
        
        activeCases = totalCases + newCases - totalDeath - totalRecovered;

        dispOutput(activeCases);

        if (activeCases > highestActive)
        {
            int i = 0;
            highestActive = activeCases;
            while(state[i] != '\0')
            {
                highestState[i] = state[i];
                i++;
            }
            highestState[i] = '\0';
        }

        totalActive += activeCases;
        numStates++;


        cout << "Press <ENTER> to continue...";
        cin.ignore();
        ch = cin.get();
        cout << endl;
    } while (ch == '\n');

    cout << "\n<<<<<<<<< ACTIVE CASES >>>>>>>>>>" << endl;
    cout << "Total  : " << totalActive << endl;
    cout << "Highest: " << highestActive << " (" << highestState << ")" << endl;
    cout << "Average for " << numStates << " states: " << calcAverage(numStates, totalActive) << endl;

    return 0;
}

void dispStatus(int active)
{
    if (active > 40)
        cout << "Red zone" << endl;
    else if ((active >=21) && (active <= 40))
        cout << "Orange zone" << endl;
    else if ((active >= 1) && (active <= 20))
        cout << "Yellow zone" << endl;
    else 
        cout << "Green zone" << endl;
}

void getInput(int &total, int &newCases, int &death, int &recovered)
{
    cout << "Total cases    : ";
    cin >> total;
    cout << "New cases      : ";
    cin >> newCases;
    cout << "Total death    : ";
    cin >> death;
    cout << "Total recovered: ";
    cin >> recovered;
}

void dispOutput(int active)
{
    cout << "\n<<<<<<<<<<<<< SUMMARY >>>>>>>>>>>" << endl;
    cout << "Active cases     : " << active << endl;
    cout << "Status           : ";
    dispStatus(active);
    cout << endl;
}

int calcAverage(int state, int total)
{
    return total / state;
}