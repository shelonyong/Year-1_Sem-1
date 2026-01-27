/* ASSIGNMENT 3
   GROUP MEMBERS: 1. YONG SEE EN (A25CS0168)
                  2. MUHAMMAD HAFIZ BIN SUHAILI (A25CS0106)
   SET NUMBER: 1
   GROUP     : 5
   SECTION   : 02
   LECTURER  : DR MUHAMMAD LUQMAN BIN MUHAMMAD SHAFIE
   DATE      : 5/1/2026 
*/

#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

void displayLine(ofstream &);
int findIndWinner(int []);
int findTeamWinner(int [], int &); 

int main()
{
   int marks[12][7];
   int totalInd[12] = {0};
   int totalTeam[3] = {0};
   int indWinnerIndex, teamWinnerIndex, teamWinScore;

   ifstream inFile;
   inFile.open("input.txt");

   if (!inFile)
   {
      cout << "Sorry, input file does not exist!" << endl;
      cout << "Press any key to continue . . ." << endl;
      cin.get();

      return 0;
   }

   for (int i = 0; i < 12; i++)
   {
      inFile >> marks[i][0]; // Team ID
      inFile >> marks[i][1]; // Participant ID

      for (int j = 2; j < 7; j++) // Events E1-E5
      {
         inFile >> marks[i][j];
         totalInd[i] += marks[i][j];
      }

      totalTeam[marks[i][0] - 1] += totalInd[i];
   }

   inFile.close();

   ofstream outFile;
   outFile.open("output.txt");

   displayLine(outFile);
   outFile << left << setw(8) << "Id" 
           << setw(8) << "E1" << setw(8) << "E2" 
           << setw(8) << "E3" << setw(8) << "E4" 
           << setw(8) << "E5" << setw(8) << "Total" << endl;
   displayLine(outFile);

   for (int team = 1; team <= 3; team++)
   {
      outFile << "TEAM " << team << endl;

      for (int i = 0; i < 12; i++)
      {
         if (marks[i][0] == team)
         {
            outFile << left << setw(8) << marks[i][1]; // Participant ID

            for (int j = 2; j < 7; j++)
            {
               outFile << setw(8) << marks[i][j]; 
            }

            outFile << setw(8) << totalInd[i] << endl;
         }  
      }

      outFile << "TOTAL" << right << setw(46) << totalTeam[team - 1] << endl;
      displayLine(outFile);
   }

   indWinnerIndex = findIndWinner(totalInd);
   teamWinnerIndex = findTeamWinner(totalTeam, teamWinScore);

   outFile << "\nWinner for Individual Category: " << marks[indWinnerIndex][1] << " (Team " << marks[indWinnerIndex][0] << ")" << endl;

   outFile << "Winner for Group Category: Team " << (teamWinnerIndex + 1) << " (Score = " << teamWinScore << ")" << endl;
   
   outFile.close();

   return 0;
}

void displayLine(ofstream &outFile)
{
   for (int i = 0; i < 52; i++)
   {
      outFile << "-";
   }
   outFile << endl;
}

int findIndWinner(int totalIndScore[])
{
   int highestScore = totalIndScore[0];
   int index = 0;
   for (int i = 1; i < 12; i++)
   {
      if (totalIndScore[i] > highestScore)
      {
         highestScore = totalIndScore[i];
         index = i;
      }
   }

   return index;
}

int findTeamWinner(int totalTeamScore[], int &winScore)
{
   int highest = totalTeamScore[0];
   int index = 0;
   for (int j = 1; j < 3; j++)
   {
      if(totalTeamScore[j] > highest)
      {
         highest = totalTeamScore[j];
         index = j;
      }
   }
   winScore = highest;
   
   return index;
}